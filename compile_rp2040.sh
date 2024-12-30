#!/usr/bin/env bash

qmk compile -kb crkbd -km parker -e CONVERT_TO=rp2040_ce && \
echo "FINISHED COMPILING, FLASH NOW" && \
sleep 1 && \
echo "."
sleep 1 && \
echo "."
sleep 1 && \
echo "."
sleep 1 && \
echo "."
sleep 1 && \
echo "."
sleep 1 && \
udisksctl mount --block-device /dev/disk/by-label/RPI-RP2 && \
cp crkbd_rev1_parker_rp2040_ce.uf2 /run/media/parker/RPI-RP2/
