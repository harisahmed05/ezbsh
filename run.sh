#! /bin/bash
# I'll add makefiles/cmake later
gcc src/main.c src/headers/ezbsh.h src/headers/ezbsh.h -lreadline -o ezbsh
./ezbsh
# If it's already compiled then why again? I'll fix them later.
# Attention: libreadline-dev required!!!
