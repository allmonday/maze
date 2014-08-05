main: main.o stack.o maze.o
		gcc -g main.o stack.o maze.o -o main

main.o: main.c main.h stack.h maze.h
		gcc -g -c main.c

stack.o: stack.c stack.h main.h
		gcc -g -c stack.c

maze.o: maze.c maze.h main.h
		gcc -g -c maze.c
