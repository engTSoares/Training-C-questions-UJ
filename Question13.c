#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero qualquer:");
    scanf("%d",&numero);

    printf("Os 5 sucessores do numero %d: \n",numero);
    for(int i=0; i<5; i++){
        numero++;
        printf("%d\n",numero);   
    }        
}

