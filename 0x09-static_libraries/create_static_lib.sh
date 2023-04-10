#!/bin/bash
gcc -Wall -Wextra -Werror _pedantic -c *.c
ar rc liball.a *.o
