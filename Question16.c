#include <stdio.h>

int main(){
    float media, idades[3];

    for(int i = 0; i < 3; i++){
        printf("Digite a idade da pessoa %d:\n", i + 1);
        scanf("%f", &idades[i]);
    }

    media = (idades[0] + idades[1] + idades[2]) / 3;
    printf("A media das idades inseridas: %.2f", media);
}
