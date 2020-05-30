#!/usr/bin/bash

curVol=$(pamixer --get-volume)

printf "%s\n" "^c#fe8019^^d^ $curVol%"