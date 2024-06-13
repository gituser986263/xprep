


set shell := ["/bin/sh", "-c"]



default:
    just --list



build-all:
    mkdir -p bin
    g++ src/f1.cpp -o bin/f1



clean:
    rm -r bin/



