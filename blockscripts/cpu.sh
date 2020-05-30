#!/usr/bin/bash

temp=$(sensors | rg "Package id 0" | awk '{print $4}' | cut -b 2-);
freq=$(cat /proc/cpuinfo | grep "cpu MHz" | awk '{s+=$4}END{printf("%d MHz\n",s/NR)}')

# Temporarily removed load, as it it wonky with a delay
#load=$(mpstat 1 1 | grep Average | awk '{print $3}')
#^c#fe8019^^d^ $load  
printf "%s\n" "^c#fe8019^^d^ $freq ^c#fe8019^^d^ $temp"
