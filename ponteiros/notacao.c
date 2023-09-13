#include <stdio.h>


int main(){
    int a, b, x;
    int *pa, *pb, *px;
    // pa --> guarda o endereço de memória da variável a
    pa = &a;
    pb = &b;
    px = &x;

    scanf("%d %d", pa, pb);
    printf("Imprimindo o valor de x: \n");
    x = a + b;
    printf("X: %d", x); 

    return 0;
}