all: vecprod vecadd vecmain out

vecprod: vecprod.c
	gcc -Wall -c vecprod.c

vecadd: vecadd.c
	gcc -Wall -c vecadd.c

vecmain: vecmain.c
	gcc -Wall -c vecmain.c

out: vecprod.o vecadd.o vecmain.o
	gcc vecprod.o vecadd.o vecmain.o -o out 
