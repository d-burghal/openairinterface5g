#!/bin/bash
UE_START=$1
UE_END=$2

UE_POD_LIST=($(kubectl get pods -n oai | grep oai-nr-ue-multi | awk '{print $1}'))

for i in $(seq $UE_START $UE_END)
do
    POD=${UE_POD_LIST[$i]}
    kubectl exec -n oai $POD -- bash /opt/oai-nr-ue/etc/stop_ue.sh
done