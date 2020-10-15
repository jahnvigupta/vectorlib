all: vecnorm vecprod vecadd vecmain out

vecnorm: vecnorm.c
	gcc -Wall -c vecnorm.c

vecprod: vecprod.c
	gcc -Wall -c vecprod.c

vecadd: vecadd.c
	gcc -Wall -c vecadd.c

vecmain: vecmain.c
	gcc -Wall -c vecmain.c

out: vecnorm.o vecprod.o vecadd.o vecmain.o
	gcc vecnorm.o vecprod.o vecadd.o vecmain.o -o out -lm
