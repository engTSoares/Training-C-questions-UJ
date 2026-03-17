#include <stdio.h>

int main(){
    int qtdPositivos=0, qtdNegativos=0, qtdZeros=0, armazenamentoNumeros[5];
    
    //loop para adicionar numeros ao array
    for(int j=0; j<5 ; j++){
        printf("Insira um numero:");
        scanf("%d",&armazenamentoNumeros[j]);
    }

    //loop para percorrer o array e contabilizar positivos, negativos  e zeros
    for(int j=0; j<5 ; j++){
        if(armazenamentoNumeros[j]==0){
            qtdZeros++;
        }else if(armazenamentoNumeros[j]>0){
            qtdPositivos++;
        }else if(armazenamentoNumeros[j]<0){
            qtdNegativos++;
        }
    }

    printf("Quantidade de zeros:%d\nQuantidade de negativos:%d\nQuantidade de positivos:%d\n",qtdZeros,qtdNegativos, qtdPositivos);

}
