#include <stdio.h>


void lerValor(int *valor){
    *valor = 2 * *valor;
    printf("Valor na funcao: %d\n", *valor);
}


int main(){
    int a;
    int *pa;

    pa = &a;
    scanf("%d", pa);
    lerValor(pa);
    printf("Valor no main: %d", a);

    return 0;
}