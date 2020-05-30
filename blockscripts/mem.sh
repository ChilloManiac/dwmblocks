#!/usr/bin/bash

load=$(free -g | grep "Mem" | awk '{print $3}')
total=$(free -g | grep "Mem" | awk {'print $2}')


printf "%s\n" "^c#fe8019^^d^ $load/${total}G"