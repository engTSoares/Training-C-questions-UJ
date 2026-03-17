#include <stdio.h>

int main(){
    float numero, numSucessor;
    printf("Digite um número: \n");
    scanf("%f", &numero);

    numSucessor = numero + 1;
    printf("O sucessor do número escolhido é: %2.f\n", numSucessor);
return 0;
}

