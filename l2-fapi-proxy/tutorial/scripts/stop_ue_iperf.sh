#!/bin/bash
UE_START=$1
UE_END=$2

UE_POD_LIST=($(kubectl get pods -n oai | grep oai-nr-ue-multi | awk '{print $1}'))

for i in $(seq $UE_START $UE_END)
do
    POD=${UE_POD_LIST[$i]}
    # IPERF_PID=$(kubectl exec -n oai $POD -- ps -ef | grep iperf3 | tr -s " " " " | cut -d " " -f2)
    IPERF_PIDS=($(kubectl exec -n oai $POD -- ps -ef | grep iperf3 | awk '{print $2}'))
    for PID in $IPERF_PIDS
    do
        echo "Killing iperf PID $PID for UE pod $POD..."
        kubectl exec -n oai $POD -- kill $PID
    done
done

