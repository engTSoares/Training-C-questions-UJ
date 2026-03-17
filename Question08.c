#include <stdio.h>
#include <math.h>

int main(){
    int numUm, numDois;
    printf("Insira um numero:");
    scanf("%d", &numUm);

    printf("Insira outro numero:");
    scanf("%d", &numDois);

    printf("O valor de %d elevado a %d: %2.lf\n", numUm, numDois, pow(numUm,numDois));
    printf("O valor de %d elevado a %d: %2.lf\n", numDois, numUm, pow(numDois,numUm));

}
