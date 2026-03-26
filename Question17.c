#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;
    printf("Insira o valor do cateto 1: ");
    scanf("%f",&cateto1);

    printf("Insira o valor do cateto 2: ");
    scanf("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+ pow(cateto2, 2));
    printf("O valor da hipotenusa: %2.f",hipotenusa);
}
