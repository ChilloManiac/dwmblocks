#!/usr/bin/bash

bat=$(acpi | awk '{print $4}' | rev | cut -b 3- | rev)

if [ $bat -ge 90 ]; then 
    icon="^c#5df23c^^d^"
elif [ $bat -ge 70 ]; then
    icon="^c#5df23c^^d^"
elif [ $bat -ge 40 ]; then
    icon="^c#5df23c^^d^"
elif [ $bat -ge 10 ]; then
    icon="^c#f9f94a^^d^"
else 
    icon="^c#d33906^^d^"
fi

printf "%s %s\n" "$icon $bat%"