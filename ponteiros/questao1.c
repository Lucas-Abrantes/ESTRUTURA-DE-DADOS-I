/*

Crie uma função que receba como parâmetro 3 notas de um aluno e
verifique se ele passou ou não. Utilizando operações com ponteiros

--> Calcule a média;
--> Mostre o endereço de memória da média final.

*/


void lerNotas(float *nota1, float *nota2, float *nota3, float *media){
    *media = (*nota1 + *nota2 + *nota3)/3;
    printf("Media do aluno: %.2f\n", *media);
}

#include <stdio.h>


int main(){
    float nota1, nota2, nota3, res;
    float *pn1, *pn2, *pn3, *pres;

    pn1 = &nota1;
    pn2 = &nota2;
    pn3 = &nota3;
    pres = &res;
    
    printf("Digite as notas do aluno:\n");
    scanf("%f %f %f", pn1, pn2, pn3);

    lerNotas(pn1, pn2, pn3, pres);
    printf("Endereco na memoria: %p", pres);
    return 0;
}