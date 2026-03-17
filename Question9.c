#include <stdio.h>

int main(){
    int numUm, numDois, resto;
    printf("Insira um numero:");
    scanf("%d", &numUm);

    printf("Insira outro numero:");
    scanf("%d", &numDois);

    resto=numUm % numDois;

    printf("O valor do resto da divisao de %d e %d: %d\n", numUm, numDois, resto);
}
