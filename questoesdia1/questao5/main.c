#include <stdio.h>

int main (){
    float n1, n2, n3, media,x;
    
    for(x = 0; x < 1;x++){
        printf("Insira as notas: \n");
        scanf("%f %f %f", &n1,&n2,&n3);

    }
    media = (n1+n2+n3)/3;
    printf("Media: %.2f", media);
}
