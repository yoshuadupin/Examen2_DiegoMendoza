main:	Seres.o FrutaDiablo.o Paramecia.o main.o
	g++	Seres.o FrutaDiablo.o main.o Paramecia.o -o main	

main.o:	main.cpp FrutaDiablo.h Seres.h
	g++ -c main.cpp

Seres.o:	FrutaDiablo.h Seres.h Seres.cpp 
	g++ -c Seres.cpp 

Paramecia.o:	FrutaDiablo.h Paramecia.h Paramecia.cpp
	g++ -c Paramecia.cpp	

FrutaDiablo.o:	FrutaDiablo.h FrutaDiablo.cpp
	g++  -c FrutaDiablo.cpp 

clean:	
	rm *.o main
