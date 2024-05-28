CC = gcc
FLAGS = -g -Wall

main: main.o func.o
	$(CC) $(FLAGS) main.o func.o -o main

main.o: main.c func.h
	$(CC) $(FLAGS) -c main.c

func.o: func.c func.h
	$(CC) $(FLAGS) -c func.c

clean:
	rm -f *.o main
