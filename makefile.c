big3.exe:big3.o factorial.o
	gcc -o big3.exe big3.o fact.o
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
