#include <stdio.h>

int main (){
    float n1, n2, n3, media,x=1;
    
    do{
		printf("Insira as notas: \n");
    	scanf("%f %f %f", &n1,&n2,&n3);
    	x--;
    }while(x!=0);
    media = (n1+n2+n3)/3;
    printf("Media: %.2f", media);
}
