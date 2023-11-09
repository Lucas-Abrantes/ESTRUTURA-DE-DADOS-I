#include <stdio.h>
#include <string.h>


int main(){
    char texto[20];
    int n;
    printf("Digite o texto: ");
    scanf("%[^\n]s", texto); // comando para continuar a 
    //leitura até o usuário pressionar enter
    printf("%s\n", texto);
    n = strlen(texto);
    printf("Tamanho do texto %d\n", n);
    if(n > strlen(texto)){
        printf("Quantidade digitada ultrapassou o limite.\n");
    }
    else{
        printf("Quantidade aceita\n");
    }
}