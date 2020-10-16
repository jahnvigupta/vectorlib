all: vecnorm vecprod vecdot vecadd vecmain out

vecnorm: vecnorm.c
	gcc -Wall -c vecnorm.c

vecdot: vecdot.c
	gcc -Wall -c vecdot.c

vecprod: vecprod.c
	gcc -Wall -c vecprod.c

vecadd: vecadd.c
	gcc -Wall -c vecadd.c

vecmain: vecmain.c
	gcc -Wall -c vecmain.c

out: vecdot.o vecnorm.o vecprod.o vecadd.o vecmain.o
	gcc vecdot.o vecnorm.o vecprod.o vecadd.o vecmain.o -o out -lm
