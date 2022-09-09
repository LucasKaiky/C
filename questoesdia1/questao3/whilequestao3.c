#include <stdio.h>

int main(int argc, char** argv) {
	/* imprima os numeros pares de 0 a 100 */
	int num;
	while(num>=0 && num <100){
		printf("\n%d",num+=2);
	}
	return 0;
}
