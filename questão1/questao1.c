#include <stdio.h>
#include <locale.h>

int main() {
	//Calcule a Média Aritmética de 3 números dados
	setlocale(LC_ALL, "Portuguese");
	int numero1=0,numero2=0,numero3=0,mediaA=0;
	
	printf("Digite o primeiro número: ");
		scanf("%d", &numero1);
	
	printf("Digite o segundo número: ");
		scanf("%d", &numero2);
	
	printf("Digite o terceiro número: ");
		scanf("%d", &numero3);
		
	mediaA=(numero1+numero2+numero3)/3;
	
	printf("Sua média é: %d", mediaA);
	
	return 0;
}
