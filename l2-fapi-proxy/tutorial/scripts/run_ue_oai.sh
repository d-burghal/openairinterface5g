#!/bin/bash
UE_START=$1
UE_END=$2

UE_POD_LIST=($(kubectl get pods -n oai | grep oai-nr-ue-multi | awk '{print $1}'))

for i in $(seq $UE_START $UE_END)
do
    POD=${UE_POD_LIST[$i]}
    CMD="kubectl exec -n oai $POD -- bash /opt/oai-nr-ue/etc/run_ue_l2proxy.sh > /dev/null 2>&1 &"
    echo "Running command: $CMD"
    kubectl exec -n oai $POD -- bash /opt/oai-nr-ue/etc/run_ue_l2proxy.sh &
    sleep .5
done