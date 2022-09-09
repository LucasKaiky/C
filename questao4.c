#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	//Converta de Celcius para Fahrenheit
	float celcius=0, fah=0;
	
	printf("Quantidade de graus Celcius que deseja converter para Fahrenheit: ");
		scanf("%f", &celcius);
	
	fah = (celcius * 1.8) + 32; 
	
	printf("A quantidade convertida de %0.1f graus celcius para fahrenheit é: %0.1f", celcius, fah);
	
	return 0;
}
