#include <stdio.h>

int dowhile2(int argc, char** argv) {
	/* Imprima o numero de 1 a 100 utilizando for / while / do while*/
	
	int numero=100;
	
	do{
		printf("%d",numero--);
	}while(numero>-1 && numero <101);
	return 0;
}
