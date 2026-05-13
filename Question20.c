#include <stdio.h>

int main() {
    int vetorDeNumeros[10], quantidadePar=0, quantidadeImpar=0;
    for(int i=0; i<10;i++){
        printf("Digite o número %d do vetor:\n",i+1);
        scanf("%d",&vetorDeNumeros[i]);
        
        if(vetorDeNumeros[i] %2 == 0){
            quantidadePar++;
        }else{
            quantidadeImpar++;
        }
    }
    printf("Quantidade de numeros pares: %d\nQuantidade de numeros impares:%d",quantidadePar, quantidadeImpar);
    
}
