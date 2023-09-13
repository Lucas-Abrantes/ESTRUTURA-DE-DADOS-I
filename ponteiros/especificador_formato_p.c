#include <stdio.h>


int main(){
    float nota1, nota2, media;
    float *pnota1, *pnota2, *pmedia;

    pnota1 = &nota1;
    pnota2 = &nota2;
    pmedia = &media;

    printf("Digite os valores das notas: \n");
    scanf("%f %f", pnota1, pnota2);

    *pmedia = (2 * *pnota1 + 4 * *pnota2)/ 6;
    printf("Valor da media: %.2f", *pmedia);
    printf("\n");
    // %p --> especificador de formato que permite identificar o endereço
    printf("Endereço da media na memoria: %p", pmedia);

    return 0;
}