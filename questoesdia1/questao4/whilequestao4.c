#include <stdio.h>

int main() {
	/* fa�a um programa que pergunte a quantas idades ele qr e dps receba as idades e calcule a idade m�dia*/
	int quantidade, idade,qntidad,i;
	float media;
	
	printf("Quantas idades quer calcular: ");
	scanf("%d",&quantidade);
	
	while(quantidade!=0){
		printf("Digite a idade: ");
		scanf("%d",&idade);
		qntidad+=idade;
		media= qntidad/quantidade;
		quantidade--;
	}
	printf("%.2f",media);
	return 0;
}
