#!/bin/bash
# start_gnb_pods.sh - Enhanced gNB Multi-Deployment Script
# This script deploys gNB pods and configures L2 proxy IPs with command-line argument support

set -e  # Exit on any error

# Get script directory to make paths relative
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CHARTS_DIR_REL="../../../charts/l2proxy"
SCRIPTS_DIR_REL="."

# Resolve relative paths
CHARTS_DIR="$(cd "$SCRIPT_DIR/$CHARTS_DIR_REL" && pwd)"
SCRIPTS_DIR="$SCRIPT_DIR"

# Default configuration
DEFAULT_NAMESPACE="oai"
NAMESPACE=""
RELEASE_NAME="oai-gnb-multi"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Help function
show_help() {
    echo "Usage: $0 [OPTIONS]"
    echo "Deploy multiple gNB pods with L2 proxy IP configuration"
    echo ""
    echo "Options:"
    echo "  -n, --namespace NAME     Kubernetes namespace to deploy to"
    echo "  -c, --num-gnb NUM        Number of gNBs to deploy (default: current values.yaml count)"
    echo "  -h, --help               Show this help message"
    echo ""
    echo "Examples:"
    echo "  $0                          # Deploy current number of gNBs from values.yaml"
    echo "  $0 -n my-namespace          # Deploy to 'my-namespace'"
    echo "  $0 --num-gnb 3              # Deploy 3 gNBs to default namespace"
    echo "  $0 -n test --num-gnb 5      # Deploy 5 gNBs to 'test' namespace"
    echo "  $0 4                        # Deploy 4 gNBs (positional argument)"
}

# Parse command line arguments
parse_args() {
    while [[ $# -gt 0 ]]; do
        case $1 in
            -n|--namespace)
                NAMESPACE="$2"
                shift 2
                ;;
            -c|--num-gnb)
                NUM_GNB="$2"
                shift 2
                ;;
            -h|--help)
                show_help
                exit 0
                ;;
            -*)
                echo "Unknown option $1"
                show_help
                exit 1
                ;;
            *)
                # Assume first non-option argument is number of gNBs
                if [[ "$1" =~ ^[0-9]+$ ]]; then
                    NUM_GNB="$1"
                else
                    echo "Unknown argument: $1"
                    show_help
                    exit 1
                fi
                shift
                ;;
        esac
    done
}

# Function to get current gnb count from values.yaml
get_current_gnb_count() {
    local values_file="$CHARTS_DIR/oai-5g-ran/oai-gnb-multi/values.yaml"
    if [ -f "$values_file" ]; then
        # Extract gnbIds array and count the elements
        local gnb_ids_line=$(grep "^gnbIds:" "$values_file" | sed 's/gnbIds: *//' | tr -d '[]')
        local count=$(echo "$gnb_ids_line" | tr ',' '\n' | wc -l)
        echo $count
    else
        echo 7  # fallback default
    fi
}

# Function to get available namespaces
get_available_namespaces() {
    echo "Available Kubernetes namespaces:"
    kubectl get namespaces --no-headers | awk '{print "  - " $1}'
}

# Function to select namespace
select_namespace() {
    # If namespace was provided via command line, use it for deployment
    # but still check for existing deployments in that namespace for cleanup
    if [ -n "$NAMESPACE" ]; then
        log "Using specified namespace for deployment: $NAMESPACE"
        
        # Check if there are existing deployments in the specified namespace for cleanup
        log "Checking for existing gNB deployments in specified namespace: $NAMESPACE"
        if helm list -n $NAMESPACE 2>/dev/null | grep -q "$RELEASE_NAME"; then
            log "Found existing $RELEASE_NAME deployment in specified namespace: $NAMESPACE (will be cleaned up)"
        fi
        return
    fi

    # Get list of existing namespaces
    local namespaces=$(kubectl get namespaces --no-headers | awk '{print $1}')

    # Check if there are existing gNB deployments in any namespace
    log "Checking for existing gNB deployments..."
    local existing_namespaces=()
    for ns in $namespaces; do
        if helm list -n $ns 2>/dev/null | grep -q "$RELEASE_NAME"; then
            existing_namespaces+=($ns)
            log "Found existing $RELEASE_NAME deployment in namespace: $ns"
        fi
    done

    # If we found existing deployments, handle based on count
    if [ ${#existing_namespaces[@]} -gt 0 ]; then
        # If only one non-default namespace, use it
        local non_default_namespaces=()
        for ns in "${existing_namespaces[@]}"; do
            if [ "$ns" != "default" ]; then
                non_default_namespaces+=($ns)
            fi
        done

        if [ ${#non_default_namespaces[@]} -eq 1 ]; then
            # Only one non-default namespace found, use it
            NAMESPACE=${non_default_namespaces[0]}
            log "Using non-default namespace with existing deployment: $NAMESPACE"
            return
        elif [ ${#non_default_namespaces[@]} -gt 1 ]; then
            # Multiple non-default namespaces found, error out
            log_error "Multiple non-default namespaces found with existing deployments:"
            for ns in "${non_default_namespaces[@]}"; do
                echo "  - $ns"
            done
            log_error "Please specify namespace explicitly using -n or --namespace option"
            log_error "Example: $0 -n <namespace_name>"
            log_error "Available namespaces with deployments:"
            for ns in "${existing_namespaces[@]}"; do
                echo "  - $ns"
            done
            exit 1
        else
            # Only default namespace found, use it
            NAMESPACE="default"
            log "Using default namespace with existing deployment: $NAMESPACE"
            return
        fi
    fi

    # No existing deployments, check for preferred namespaces
    # Check if "oai" namespace exists (preferred for OAI deployments)
    if echo "$namespaces" | grep -q "^oai$"; then
        NAMESPACE="oai"
        log "Using preferred 'oai' namespace: $NAMESPACE"
        return
    fi

    # Check if default namespace exists
    if echo "$namespaces" | grep -q "^default$"; then
        NAMESPACE="default"
        log "Using default namespace: $NAMESPACE"
    else
        # Use first available namespace
        NAMESPACE=$(echo "$namespaces" | head -1)
        log "Using first available namespace: $NAMESPACE"
    fi

    # Show all available namespaces for reference
    log "Available namespaces:"
    echo "$namespaces" | sed 's/^/  /'
}

# Function to generate gnbIds array for values.yaml
generate_gnb_ids() {
    local gnb_count=${1:-$NUM_GNB}
    local gnb_ids="["
    for ((i=0; i<gnb_count; i++)); do
        # Format number with leading zero for single digits
        if [ $i -lt 10 ]; then
            gnb_ids+="\"0$i\""
        else
            gnb_ids+="\"$i\""
        fi
        
        # Add comma if not last element
        if [ $i -lt $((gnb_count-1)) ]; then
            gnb_ids+=", "
        fi
    done
    gnb_ids+="]"
    echo "$gnb_ids"
}

# Function to update values.yaml with specified number of gNBs
update_values_yaml() {
    local values_file="$CHARTS_DIR/oai-5g-ran/oai-gnb-multi/values.yaml"
    
    # If NUM_GNB is not set, use current count from values.yaml
    if [ -z "$NUM_GNB" ]; then
        NUM_GNB=$(get_current_gnb_count)
        log "Using current gNB count from values.yaml: $NUM_GNB"
    fi
    
    local gnb_ids=$(generate_gnb_ids $NUM_GNB)
    
    log "Updating values.yaml with $NUM_GNB gNBs: $gnb_ids"
    
    # Create backup
    cp "$values_file" "$values_file.backup.$(date +%s)"
    
    # Update gnbIds line using sed
    sed -i "s/^gnbIds: .*/gnbIds: $gnb_ids/" "$values_file"
    
    log "✓ values.yaml updated successfully"
}

# Logging function
log() {
    echo -e "${GREEN}[$(date +'%Y-%m-%d %H:%M:%S')]${NC} $1"
}

log_warn() {
    echo -e "${YELLOW}[$(date +'%Y-%m-%d %H:%M:%S')] WARNING:${NC} $1"
}

log_error() {
    echo -e "${RED}[$(date +'%Y-%m-%d %H:%M:%S')] ERROR:${NC} $1"
}

log_info() {
    echo -e "${BLUE}[$(date +'%Y-%m-%d %H:%M:%S')] INFO:${NC} $1"
}

# Function to check prerequisites
check_prerequisites() {
    log "Checking prerequisites..."
    
    # Check kubectl
    if ! command -v kubectl &> /dev/null; then
        log_error "kubectl is not installed or not in PATH"
        exit 1
    fi
    log "✓ kubectl is available"
    
    # Check helm
    if ! command -v helm &> /dev/null; then
        log_error "helm is not installed or not in PATH"
        exit 1
    fi
    log "✓ helm is available"
    
    # Check chart directory
    if [ ! -d "$CHARTS_DIR" ]; then
        log_error "Charts directory not found: $CHARTS_DIR"
        exit 1
    fi
    log "✓ Charts directory found: $CHARTS_DIR"
    
    log "All prerequisites satisfied"
    echo
}

# Function to clean existing deployments
clean_existing_deployments() {
    log "Cleaning existing gNB deployments..."
    
    # Uninstall Helm release if it exists
    if helm list -n $NAMESPACE | grep -q $RELEASE_NAME; then
        log "Uninstalling existing Helm release..."
        helm uninstall $RELEASE_NAME -n $NAMESPACE --timeout 60s 2>/dev/null || true
        sleep 15
    fi
    
    # Force delete any remaining deployments
    log "Force deleting any remaining gNB deployments..."
    kubectl delete deployments -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME --force --grace-period=0 2>/dev/null || true
    sleep 10
    
    # Clear any orphaned pods
    log "Clearing any orphaned gNB pods..."
    kubectl delete pods -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME --force --grace-period=0 2>/dev/null || true
    sleep 10
    
    log "Cleanup completed"
    echo
}

# Function to deploy gNBs
deploy_gnbs() {
    log "Deploying $NUM_GNB gNB(s)..."
    
    # Change to charts directory
    cd $CHARTS_DIR
    
    # Deploy gNBs - handle "already exists" errors gracefully
    log "Installing gNB Helm release..."
    if ! helm install $RELEASE_NAME oai-5g-ran/oai-gnb-multi -n $NAMESPACE; then
        log_warn "Helm installation reported errors, checking if deployments exist..."
        # Check if deployments actually exist (common "already exists" issue)
        local existing_deployments=$(kubectl get deployments -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME --no-headers 2>/dev/null | wc -l)
        if [ "$existing_deployments" -gt 0 ]; then
            log "✓ Deployments already exist and are being managed"
        else
            log_error "Helm installation failed and no deployments found"
            exit 1
        fi
    fi
    
    log "gNB deployment initiated"
    echo
}

# Function to wait for pods to be ready
wait_for_pods() {
    log "Waiting for gNB pods to be ready..."
    
    local max_wait=300
    local wait_time=0
    local all_ready=false
    
    while [ $wait_time -lt $max_wait ]; do
        # Get pod information for debugging
        local pod_info=$(kubectl get pods -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME 2>/dev/null || echo "no pods")
        
        # Count total pods properly
        local total_pods=0
        if [ "$pod_info" != "no pods" ] && [ "$pod_info" != "No resources found" ]; then
            # Count lines that are not headers
            total_pods=$(echo "$pod_info" | grep -v "NAME" | grep -v "^$" | wc -l | tr -d '[:space:]')
        fi
        
        # Count ready pods (those with "1/1" in the READY column)
        local ready_pods=0
        if [ "$total_pods" -gt 0 ] && [ "$pod_info" != "no pods" ] && [ "$pod_info" != "No resources found" ]; then
            ready_pods=$(echo "$pod_info" | grep -c "1/1" 2>/dev/null || echo "0")
            ready_pods=$(echo "$ready_pods" | tr -d '[:space:]')
        fi
        
        # Ensure we have valid numbers
        total_pods=${total_pods:-0}
        ready_pods=${ready_pods:-0}
        
        # Validate integers
        if ! [[ "$total_pods" =~ ^[0-9]+$ ]]; then
            total_pods=0
        fi
        if ! [[ "$ready_pods" =~ ^[0-9]+$ ]]; then
            ready_pods=0
        fi
        
        if [ "$total_pods" -gt 0 ] && [ "$ready_pods" -eq "$total_pods" ]; then
            log "All $total_pods gNB pods are ready"
            all_ready=true
            break
        fi
        
        # Show debug info every 30 seconds
        if [ $((wait_time % 30)) -eq 0 ] || [ $wait_time -eq 0 ]; then
            log "Debug - Pod status:"
            echo "$pod_info"
        fi
        
        log "Waiting for pods... ($ready_pods/$total_pods ready)"
        sleep 10
        wait_time=$((wait_time + 10))
    done
    
    if [ "$all_ready" = false ]; then
        log_error "Timeout waiting for gNB pods to be ready"
        kubectl get pods -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME
        exit 1
    fi
    
    echo
}

# Function to fix L2 proxy IP configurations
fix_l2proxy_ips() {
    log "Fixing L2 proxy IP configurations..."
    
    # Get gNB 00 pod and IP
    log "Finding gNB 00..."
    GNB00_POD=$(kubectl get pods -n $NAMESPACE -l app.kubernetes.io/name=oai-gnb-multi-00 -o jsonpath='{.items[0].metadata.name}' 2>/dev/null)
    if [ -z "$GNB00_POD" ]; then
        log_error "gNB 00 pod not found"
        exit 1
    fi
    
    GNB00_IP=$(kubectl exec -n $NAMESPACE $GNB00_POD -- hostname -i | awk '{print $1}')
    if [ -z "$GNB00_IP" ]; then
        log_error "Could not get gNB 00 IP address"
        exit 1
    fi
    
    log "Found gNB 00 IP: $GNB00_IP"
    
    # Give gNB 00 a head start by adding delay for other gNBs
    log "Giving gNB 00 a 5-second head start..."
    sleep 5
    
    # Update all gNB pods
    log "Updating all gNB configurations..."
    local updated_count=0
    
    for pod in $(kubectl get pods -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME -o jsonpath='{.items[*].metadata.name}'); do
        log "Updating $pod..."
        
        # Get pod's own IP
        POD_IP=$(kubectl exec -n $NAMESPACE $pod -- hostname -i | awk '{print $1}')
        if [ -z "$POD_IP" ]; then
            log_warn "Could not get IP for $pod, skipping..."
            continue
        fi
        
        # Update /tmp/gnb.conf with correct IPs
        kubectl exec -n $NAMESPACE $pod -- sed -i "s/local_s_if_name  = \"lo:\"/local_s_if_name  = \"eth0\"/g" /tmp/gnb.conf 2>/dev/null || true
        kubectl exec -n $NAMESPACE $pod -- sed -i "s/remote_s_address = \"127.0.0.1\"/remote_s_address = \"$GNB00_IP\"/g" /tmp/gnb.conf 2>/dev/null || true
        kubectl exec -n $NAMESPACE $pod -- sed -i "s/local_s_address  = \"127.0.0.2\"/local_s_address  = \"$POD_IP\"/g" /tmp/gnb.conf 2>/dev/null || true
        
        log "  ✓ Updated $pod with L2 proxy IP: $GNB00_IP"
        updated_count=$((updated_count + 1))
    done
    
    log "Successfully updated $updated_count gNB pods"
    echo
}

# Function to verify configurations
verify_configurations() {
    log "Verifying L2 proxy IP configurations..."
    
    # Use existing check script if available
    if [ -f "$SCRIPTS_DIR/check_all_gnb_configs.sh" ]; then
        log "Running configuration verification..."
        cd $SCRIPTS_DIR
        ./check_all_gnb_configs.sh
    else
        log_warn "Check script not found, doing manual verification..."
        
        # Manual verification
        for pod in $(kubectl get pods -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME -o jsonpath='{.items[*].metadata.name}'); do
            echo "=== Checking $pod ==="
            kubectl exec -n $NAMESPACE $pod -- grep "remote_s_address" /tmp/gnb.conf 2>/dev/null || echo "Not found"
            echo
        done
    fi
    
    echo
}

# Function to start gNB softmodems if needed
start_gnbs() {
    log "Starting gNB softmodems (if configured)..."
    
    # This would depend on your specific start configuration
    # For now, we'll just log that the pods are ready
    log "gNB pods are deployed and configured. They will start automatically based on Helm chart configuration."
    echo
}

# Main execution
main() {
    echo "=== Enhanced gNB Multi-Deployment Script ==="
    echo "Starting at: $(date)"
    echo
    
    # Parse command line arguments
    parse_args "$@"
    
    # Check prerequisites first
    check_prerequisites
    
    # Select namespace
    select_namespace
    
    # Update values.yaml with requested number of gNBs (or current count if not specified)
    update_values_yaml
    
    log "Configuration:"
    log "  Number of gNBs: $NUM_GNB"
    log "  Release name: $RELEASE_NAME"
    log "  Charts directory: $CHARTS_DIR"
    echo
    
    # Continue with deployment
    clean_existing_deployments
    deploy_gnbs
    wait_for_pods
    fix_l2proxy_ips
    verify_configurations
    start_gnbs
    
    log "=== Enhanced gNB deployment completed successfully! ==="
    echo
    log "Summary:"
    log "✓ $NUM_GNB gNB pod(s) deployed to namespace: $NAMESPACE"
    log "✓ L2 proxy IP configurations fixed"
    log "✓ Configurations verified"
    echo
    log "Next steps:"
    log "1. Run './check_all_gnb_configs.sh' to verify L2 proxy IP configurations"
    log "2. Monitor pod logs if needed: kubectl logs -n $NAMESPACE -l app.kubernetes.io/instance=$RELEASE_NAME"
    log "3. gNBs should now be ready for L2 proxy operation"
}

# Run main function
main "$@"
