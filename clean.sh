#!/usr/bin/env bash

# ensure this script runs in the project root.
cd "${0%/*}" 

# see how it works @
# https://stackoverflow.com/questions/6393551/what-is-the-meaning-of-0-in-a-bash-script

echo "cleaning " $(pwd)

find ./ -type f -name '*~' -delete
rm -rf ./build
