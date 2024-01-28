#!/bin/bash
sudo pacman -Syu --noconfirm && yay -Syu --noconfirm
sudo pacman -S tar dbus gcc-libs lib32-dbus lib32-gcc-libs lib32-sdl2 sdl2
mkdir steamcmd && cd steamcmd
curl -O https://steamcdn-a.akamaihd.net/client/installer/steamcmd_linux.tar.gz
tar -xvzf steamcmd_linux.tar.gz
./steamcmd.sh +quit
