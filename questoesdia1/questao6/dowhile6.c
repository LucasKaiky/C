#include <stdio.h>

int main(){
    int num,x=10,s=0;
        do{
            printf("Digite os numeros: ");
            scanf("%d", &num);
            if(num > 10 && num < 35){
                s++;
            }
            x--;
    }while(x!=0);
    printf("Tem %d numeros entre 10 e 35", s);
}

