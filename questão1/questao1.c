#include <stdio.h>
#include <locale.h>

int main() {
	//Calcule a M�dia Aritm�tica de 3 n�meros dados
	setlocale(LC_ALL, "Portuguese");
	int numero1=0,numero2=0,numero3=0,mediaA=0;
	
	printf("Digite o primeiro n�mero: ");
		scanf("%d", &numero1);
	
	printf("Digite o segundo n�mero: ");
		scanf("%d", &numero2);
	
	printf("Digite o terceiro n�mero: ");
		scanf("%d", &numero3);
		
	mediaA=(numero1+numero2+numero3)/3;
	
	printf("Sua m�dia �: %d", mediaA);
	
	return 0;
}
