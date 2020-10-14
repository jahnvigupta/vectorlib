all: vecadd vecmain out

vecadd: vecadd.c
	gcc -Wall -c vecadd.c

vecmain: vecmain.c
	gcc -Wall -c vecmain.c

out: vecadd.o vecmain.o
	gcc vecadd.o vecmain.o -o out 