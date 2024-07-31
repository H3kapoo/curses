#!/bin/sh
cmake -B .build_files -GNinja . # generate ninja data
cmake --build .build_files      # link and compile
mv debug/Curses .      # move out of debug folder
rm -rf debug

# Enable dedicated gpu on linux, interchange between amd/nvidia
#DRI_PRIME=1 __NV_PRIME_RENDER_OFFLOAD=1 __GLX_VENDOR_LIBRARY_NAME=nvidia ./exec