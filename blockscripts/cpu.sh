#!/usr/bin/bash

temp=$(sensors | rg "Package id 0" | awk '{print $4}' | cut -b 2-);
load=$(mpstat 1 1 | grep Average | awk '{print $3}')

printf "%s\n" "^c#fe8019^^d^ $load  ^c#fe8019^^d^ $temp"
