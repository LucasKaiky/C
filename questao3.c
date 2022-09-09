#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Calcule a área de um círculo de raio r
	float area=0,raio=0,pi=3.14;
		
		printf("Digite um valor para r: ");
			scanf("%f", &raio);
		
		area=pi*(raio*raio);
		
		printf("A área do círculo com raio %f é: %f",raio, area);
	
	
	return 0;
}
