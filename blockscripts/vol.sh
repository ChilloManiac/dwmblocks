#!/usr/bin/bash

curVol=$(pamixer --get-volume)

case $BUTTON in 
    4)  if [ $curVol -le 95 ]; then
            curVol=$(($curVol + 5))
            $(pamixer --set-volume $curVol)
        fi
        ;;

    5)  if [ $curVol -ge 5 ]; then
            curVol=$(($curVol - 5))
            $(pamixer --set-volume $curVol)
        fi
        ;;
esac



printf "%s\n" "^c#fe8019^^d^ $curVol%"