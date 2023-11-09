#include <stdio.h>
#include <string.h>


int main(){

    char s1[20];
    char s2[20];

    printf("Digite o primeiro texto: ");
    scanf("%s", s1);
    printf("\n");

    printf("Digite o segundo texto: ");
    scanf("%s", s2);

    printf("\n");
    strcat(s1, s2);
    printf("Texto concatenado: %s", s1);
}