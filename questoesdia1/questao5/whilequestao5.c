#include <stdio.h>

int main(){
    float n1, n2, n3, media,x=1;
    
    while(x!=0);{
		printf("Digite as notas: \n");
    	scanf("%f %f %f", &n1,&n2,&n3);
    	x--;
    }
    media = (n1+n2+n3)/3;
    printf("Media: %.2f", media);
}
