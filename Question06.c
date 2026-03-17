#include <stdio.h>
#include <math.h>

int main(){
    float number, numberRoot;

    printf("Digite um número: \n");
    scanf("%f", &number);

    numberRoot = sqrt(number);

    printf("A raíz quadrada do número escolhido é: %2.f\n", numberRoot);
return 0;
}

