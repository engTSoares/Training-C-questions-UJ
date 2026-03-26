#include <stdio.h>

int main() {
    int vetorNumeros[5],positivos=0;
    for(int i =0; i<5; i++){
        printf("Digite um numero (%d/5): ",i+1);
        scanf("%d",&vetorNumeros[i]);
        if(vetorNumeros[i]>0){
            positivos+=1;
        }
    }

    printf("A lista de numeros digitados tem %d positivos",positivos);
}
