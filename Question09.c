#include <stdio.h>

int main(){
    int numUm, numDois, resto;
    printf("Insira o dividendo:");
    scanf("%d", &numUm);

    printf("Insira o dividor:");
    scanf("%d", &numDois);

    resto=numUm % numDois;

    printf("O valor do resto da divisao de %d e %d: %d\n", numUm, numDois, resto);
}
