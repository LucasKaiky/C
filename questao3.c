#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Calcule a �rea de um c�rculo de raio r
	float area=0,raio=0,pi=3.14;
		
		printf("Digite um valor para r: ");
			scanf("%f", &raio);
		
		area=pi*(raio*raio);
		
		printf("A �rea do c�rculo com raio %f �: %f",raio, area);
	
	
	return 0;
}
