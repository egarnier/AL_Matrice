
all: prog_main

prog_main: prog_main.cpp Matrice.o
	g++ -Wall -o prog_main prog_main.cpp Matrice.o

Matrice.o: Matrice.h Matrice.cpp
	g++ -Wall -c -o Matrice.o Matrice.cpp

clean :
	rm *.o

mrproper: clean
	rm prog_main

