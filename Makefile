main:	Seres.o Piratas.o Marina.o FrutaDiablo.o Paramecia.o Logia.o Zoan.o main.o
	g++	Seres.o FrutaDiablo.o main.o Paramecia.o Zoan.o Logia.o Marina.o -o main	

main.o:	main.cpp FrutaDiablo.h Seres.h
	g++ -c main.cpp

Piratas.o: Seres.h Piratas.h Piratas.cpp 
	g++ -c Piratas.cpp

Marina.o: Seres.h Marina.h Marina.cpp 
	g++ -c Marina.cpp 	

Seres.o:	FrutaDiablo.h Seres.h Seres.cpp 
	g++ -c Seres.cpp 

Paramecia.o:	FrutaDiablo.h Paramecia.h Paramecia.cpp
	g++ -c Paramecia.cpp

Zoan.o:	FrutaDiablo.h Zoan.h Zoan.cpp
	g++ -c Zoan.cpp 		

Logia.o:	FrutaDiablo.h Logia.h Logia.cpp
	g++ -c Logia.cpp 		

FrutaDiablo.o:	FrutaDiablo.h FrutaDiablo.cpp
	g++  -c FrutaDiablo.cpp 

clean:	
	rm *.o main
