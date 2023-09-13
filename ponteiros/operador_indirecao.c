#include <stdio.h>

int main(){
    int a, b, c, d, res;
    int *pa, *pb, *pc, *pd, *pres;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;
    pres = &res;

    printf("Informe os valores de a, b, c, d: \n");
    scanf("%d %d %d %d", pa, pb, pc, pd);
    // para acessar o valor é necessário outro *
    *pres = (*pa * *pb) - (*pc * *pd);
    printf("Valor do resultado: %d", *pres);


    return 0;
}