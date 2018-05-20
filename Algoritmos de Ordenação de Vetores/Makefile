all: main.o
	gcc -o main main.o sort.o
main.o: main.c sort.o
	gcc -c main.c -o main.o
sort.o: sort.h sort.c
	gcc -c sort.c -o sort.o
clean: 
	rm -f *.o main