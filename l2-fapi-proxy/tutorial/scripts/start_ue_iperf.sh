
#!/bin/bash
UE_START=$1
UE_END=$2

TRAFFIC_SERV_DNN_IP="12.1.2.1"
TRAFFIC_SERV_DNN_SUBNET="12.1.2.0"
UE_DNN_SUBNET="12.1.1.0"

TRAFF_SERVER_POD=$(kubectl get pods --namespace oai | grep oai-traffic-server | awk '{print $1}')
TRAFF_SERVER_IP=$(kubectl exec -n oai $TRAFF_SERVER_POD -- ifconfig eth0 | awk '/inet / {print $2}')

echo "Traffic server pod: $TRAFF_SERVER_POD"
echo "Traffic server internal IP address: $TRAFF_SERVER_IP"
echo "Traffic server DNN IP address: $TRAFFIC_SERV_DNN_IP"

UPF_POD=$(kubectl get pods --namespace oai | grep oai-upf | awk '{print $1}')
UPF_IP=$(kubectl exec -n oai $UPF_POD -- ifconfig eth0 | awk '/inet / {print $2}')

echo "UPF pod: $UPF_POD"
echo "UPF internal IP address: $UPF_IP"

echo "Configuring traffic server DNN IP and routes..."
kubectl exec -n oai $TRAFF_SERVER_POD -- ip route add $UE_DNN_SUBNET/24 via $UPF_IP dev eth0
kubectl exec  -n oai $TRAFF_SERVER_POD -- ip addr add $TRAFFIC_SERV_DNN_IP/24 dev eth0

echo "Configuring UPF DNN route..."
kubectl exec -n oai $UPF_POD -- ip route add $TRAFFIC_SERV_DNN_SUBNET/24 dev eth0

UE_POD_LIST=($(kubectl get pods -n oai | grep oai-nr-ue-multi | awk '{print $1}'))

for i in $(seq $UE_START $UE_END)
do
    POD=${UE_POD_LIST[$i]}
    echo "Creating traffic server route for UE pod $pod..."
    kubectl exec -n oai $POD -- ip route add 12.1.2.0/24 dev oaitun_ue1
done

for i in $(seq $UE_START $UE_END)
do
    POD=${UE_POD_LIST[$i]}
    UE_ID=$(echo $POD | cut -d '-' -f5)
    IPERF_PORT="52$UE_ID"
    echo "Connecting UE $UE_ID iperf client to traffic server $TRAFFIC_SERV_DNN_IP port $IPERF_PORT..."
    kubectl exec -n oai $POD -- iperf3 -c $TRAFFIC_SERV_DNN_IP -p $IPERF_PORT -b 1M -R -t 0 --logfile /tmp/iperf.log &
    # sleep .5
done
