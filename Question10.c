#include <stdio.h>

int main(){
    int numUm, numDois, quociente;
    printf("Insira o divisor:");
    scanf("%d", &numUm);

    printf("Insira o dividendo:");
    scanf("%d", &numDois);

    quociente= numUm / numDois;

    printf("O valor da divisao de %d e %d: %d\n", numUm, numDois, quociente);
}
