#include <stdio.h>

int main(){
float numUm, numDois,multiplicacao;
printf("Digite um número:\n");
scanf("%f",&numUm);
printf("Digite outro número:\n");
scanf("%f",&numDois);
multiplicacao= numUm * numDois;
printf("A multiplicacao de %2.f e %2.f: %2.f",numUm,numDois,multiplicacao);
return 0;
}
