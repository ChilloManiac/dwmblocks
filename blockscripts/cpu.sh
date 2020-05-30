#!/usr/bin/bash

temp=$(sensors | rg "Package id 0" | awk '{print $4}' | cut -b 2-);

