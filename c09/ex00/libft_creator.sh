#!/bin/bash

gcc -c -Wall -Wextra -Werror *.c
ar rv libft.a *.o
