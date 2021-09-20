#! /bin/bash
# I'll add makefiles/cmake later
if [[ -f ezbsh ]]; then
    ./ezbsh
else
    gcc src/main.c -lreadline -o ezbsh
    ./ezbsh
fi
# Attention: libreadline-dev is required!!!
