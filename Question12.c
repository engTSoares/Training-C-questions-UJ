#include <stdio.h>

int main(){
    int numero, numeroAux;
    printf("Digite um numero qualquer:");
    scanf("%d",&numero);

    if(numero % 2 == 0){
        printf("Os proximos 10 numeros pares do numero %d:\n",numero);
        numeroAux= numero;
        for(int j=0; j<10 ; j++){
            numeroAux+=2;
            printf("%d\n",numeroAux);
        }
    }else{
        printf("O numero %d: impar\n",numero);
    }
    
}
