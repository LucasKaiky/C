#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
//Calcule o antecessor e o sucessor do número

int numero=0,antecessor=0,sucessor=0;
	
	printf("Digite um número: ");
		scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("O antecessor do número %d é: %d\n", numero, antecessor);
	printf("O sucessor do número %d é: %d", numero, sucessor);

return 0;
}

