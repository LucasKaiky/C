#include <stdio.h>

int main() {
	/* faça um programa que pergunte a quantas idades ele qr e dps receba as idades e calcule a idade média*/
	int quantidade, idade,qntidad,i;
	float media;
	
	printf("Quantas idades quer calcular: ");
	scanf("%d",&quantidade);
	
	for(i = 0; i < quantidade; i++){
		printf("Digite a idade: ");
		scanf("%d",&idade);
		if (idade < 0){
			break;
		}
		qntidad+=idade;
	}
	media= qntidad/quantidade;
	printf("%.2f",media);
	return 0;
}
