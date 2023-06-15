#!/bin/bash
gcc -Wall -Wextra -pedantic -std=gnu89 -o quote 101-quote.c && ./quote 2> q && cat q
