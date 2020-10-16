all: vecangle vecnorm vecprod vecdot vecadd vecmain out

vecnorm: vecnorm.c
	gcc -Wall -c vecnorm.c

vecangle: vecangle.c
	gcc -Wall -c vecangle.c
	
vecdot: vecdot.c
	gcc -Wall -c vecdot.c

vecprod: vecprod.c
	gcc -Wall -c vecprod.c

vecadd: vecadd.c
	gcc -Wall -c vecadd.c

vecmain: vecmain.c
	gcc -Wall -c vecmain.c

out: vecangle.o vecdot.o vecnorm.o vecprod.o vecadd.o vecmain.o
	gcc vecangle.o vecdot.o vecnorm.o vecprod.o vecadd.o vecmain.o -o out -lm
