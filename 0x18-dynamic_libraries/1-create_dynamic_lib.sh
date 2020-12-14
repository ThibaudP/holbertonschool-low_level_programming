#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic *.c -fPIC -shared -o liball.so
