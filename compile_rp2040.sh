#!/usr/bin/env bash

qmk compile -kb crkbd -km parker -e CONVERT_TO=rp2040_ce && \
echo "FINISHED COMPILING, FLASH NOW" && \
sleep 10 && \
cp crkbd_rev1_parker_rp2040_ce.uf2 /run/media/parker/RPI-RP2/
