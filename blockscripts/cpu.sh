#!/usr/bin/bash

temp=$(sensors | rg "Package id 0" | awk '{print $4}' | cut -b 2-);
#load=$(top -bn1 | grep "Cpu(s)" | sed "s/.*, *\([0-9.]*\)%* id.*/\1/" | awk '{print 100 - $1"%"}')
load=$(mpstat 5 1 | grep Average | awk '{print $3}')

printf "%s\n" "^c#fe8019^^d^ $load  ^c#fe8019^^d^ $temp"