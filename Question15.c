#include <stdio.h>

int main(){
    float notas[5], media;
    for(int i=0; i<5; i++){
        printf("Digite uma nota:\n");
        scanf("%f", &notas[i]);
    }
    media= (notas[0]+ notas[1] + notas[2] + notas[3]+ notas[4] ) / 5;
    printf("A media das notas: %2.f",media); 
}
