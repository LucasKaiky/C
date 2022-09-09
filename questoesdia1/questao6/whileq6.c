#include <stdio.h>

int main(){
    int num,x=10,s=0;
        while(x!=0){
            printf("Digite os numeros: ");
            scanf("%d", &num);
            if(num > 10 && num < 35){
                s++;
            }
            x--;
    }
    printf("Tem %d numeros entre 10 e 35", s);
}

