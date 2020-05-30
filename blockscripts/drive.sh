#!/usr/bin/bash

loads=$(df -h / /home)
root=$(echo "$loads" | awk 'NR==2')
rootused=$(echo "$root" | awk '{print $3}')
roottotal=$(echo "$root" | awk '{print $2}')

home=$(echo "$loads" | awk 'NR==3')
homeused=$(echo "$home" | awk '{print $3}')
hometotal=$(echo "$home" | awk '{print $2}')

printf "%s\n" "^c#fe8019^^d^ /: $rootused/$roottotal, /home: $homeused/$hometotal"