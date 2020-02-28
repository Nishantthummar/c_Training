gcc -c string.c
ar -cvq string.a string.o
gcc main.c -o myapp string.a
