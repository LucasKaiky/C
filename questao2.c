#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
//Calcule o antecessor e o sucessor do n�mero

int numero=0,antecessor=0,sucessor=0;
	
	printf("Digite um n�mero: ");
		scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("O antecessor do n�mero %d �: %d\n", numero, antecessor);
	printf("O sucessor do n�mero %d �: %d", numero, sucessor);

return 0;
}

