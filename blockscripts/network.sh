#!/usr/bin/bash

wifi=$(iw wlp2s0 info | rg ssid | awk -F'[ ]' '{print $2}' | cut -b 1-5)

# [[ -z "${param// }" ]]

if [ -z "${wifi// }" ]; then 
    printf "^c#d33906^^d^%s\n" "disc"
else
    printf "^c#5df23c^^d^ %s\n" $wifi
fi