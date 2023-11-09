#include <stdio.h>
#include <string.h>


int main(){

    char texto1[20];
    char texto2[20];

    printf("Digite o primeiro texto: ");
    scanf("%s", texto1);
    printf("\n");
    printf("Digite o segundo texto: ");
    scanf("%s", texto2);

    if(strcmp(texto1, texto2) == 0){
        printf("Os textos digitados sao iguais");
    }
    else{
        printf("Os textos sao diferentes.");
    }
}