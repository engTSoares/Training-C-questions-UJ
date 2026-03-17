#include <stdio.h>
#include <math.h>

int main(){
    float numero;
    printf("Digite um número: \n");
    scanf("%f", &numero);
    printf("O quadrado de %2.f é %2.f", numero, pow(numero, 2));
return 0;
}
