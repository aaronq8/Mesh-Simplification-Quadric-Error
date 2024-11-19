#!bin/bash
if cmake -S . -B ./build/; then
    cd ./build/
    make
fi
