#include <stdio.h>

int main(){
    int num,x,s=0;
        for (x = 0; x < 10; x++){
            printf("Digite o numero: ");
            scanf("%d", &num);
            if(num > 10 && num < 35){
                s++;
            }
    }
    printf("Tem %d numeros entre 10 e 35", s);
}

