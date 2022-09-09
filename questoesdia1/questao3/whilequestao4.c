#include <stdio.h>

int main(int argc, char** argv) {
	/* imprima os numeros pares de 0 a 100 */
	int num;
	do{
		printf("\n%d",num+=2);
	}while(num>=0 && num <100);
	return 0;
}
