#!/usr/bin/env sh

python emotes_to_unicode_seq.py > keyboards/levinson/keymaps/josh/emotes.h
sudo make levinson/rev2:josh:dfu
