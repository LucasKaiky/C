#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	srand((unsigned)time(NULL)); 
	
	int escolha, aleat=(rand()%3)+1;
	
	printf("Escolha 1 - Pedra | 2 - Papel | 3 - Tesoura\n");
	scanf("%d",&escolha);
	
	switch(escolha){
		case 1:
			printf("Jogador jogou pedra!\n");
			printf("O adversário jogou %d\n",aleat);
			
			if (aleat == 1){
				printf("EMPATE!");
				break;
			}
			else if (aleat==2){
				printf("JOGADOR PERDEU!");
				break;
			}
			else{
				printf("JOGADOR GANHOU!");
				break;
			}
			break;
		
		case 2:
			printf("Jogador jogou papel!\n");
			printf("O adversário jogou %d\n",aleat);
			
			if (aleat == 1){
			
				printf("JOGADOR GANHOU!");
				break;
			}
			else if(aleat==2){
				printf("EMPATE!");
				break;
			}
			else{
				printf("JOGADOR PERDEU!");
				break;
			}
			break;
		
		case 3:
			printf("Jogador jogou tesoura!\n");
			printf("O adversário jogou %d\n",aleat);
			
			if (aleat == 1){
				printf("JOGADOR PERDEU!");
				break;
			}
			else if(aleat==2){
				printf("JOGADOR GANHOU!");
				break;
			}
			else{
				printf("EMPATE!");
				break;
			}
			break;
	}
	return 0;
} 

