#include <stdio.h>
#include <string.h>


int main(){

    char texto1[50];
    char texto2[50];

    printf("Digite o texto: ");
    scanf("%[^\n]s", texto1);
    printf("%s\n", texto1);
    // copia o conteudo do texto 1 para o texto 2
    strcpy(texto2, texto1);
    printf("%s", texto2);
    return 0;
}