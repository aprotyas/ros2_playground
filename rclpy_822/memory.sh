#!/bin/bash    
psrecord $(pgrep test_service) --interval 1 --duration 60 --plot test_service.png &
P1=$!
psrecord $(pgrep test_client) --interval 1 --duration 60 --plot test_client.png &
P2=$!
wait $P1 $P2
echo 'Done'
