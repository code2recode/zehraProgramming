myapp:	main.o	addition.o	subtraction.o	multiplication.o
	gcc -o	myapp	main.o	addition.o	subtraction.o	multiplication.o
main.o:	main.c	addition.h


addition.o:	addition.h

subtraction.o:	subtraction.h	multiplication.h

multiplication.o:	multiplication.h	addition.h	subtraction.h

