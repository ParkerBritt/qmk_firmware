#!/usr/bin/env bash

qmk compile -kb crkbd -km parker -e CONVERT_TO=rp2040_ce && \
echo "FINISHED COMPILING, FLASH NOW" && \

for i in {1..100}; do
  if [[ -e /dev/disk/by-label/RPI-RP2 ]]; then
    echo "Device found: /dev/disk/by-label/RPI-RP2"
    udisksctl mount --block-device /dev/disk/by-label/RPI-RP2 && \
    cp crkbd_rev1_parker_rp2040_ce.uf2 /run/media/parker/RPI-RP2/
    exit 0
  fi
  echo "."
  sleep 1

done

echo "Device not found after 100 attempts. Exiting."
exit 1
