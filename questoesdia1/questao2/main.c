#include <stdio.h>

int main(int argc, char** argv) {
	/* Imprima o numero de 1 a 100 utilizando for / while / do while*/
	
	int numero=100;
	
	while(numero>-1 && numero < 101){
		printf("\n%d",numero--);
	}
	return 0;
}
