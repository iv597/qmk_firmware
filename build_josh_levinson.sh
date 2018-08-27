#!/usr/bin/env sh

echo "===> Generating emotes.h with qmk_emote_macro_generator"
docker run iv597/qmk_emote_macro_generator:latest > keyboards/levinson/keymaps/josh/emotes.h

echo "===> Building and flashing keyboard with DFU (requires sudo)"
sudo make levinson/rev2:josh:dfu
