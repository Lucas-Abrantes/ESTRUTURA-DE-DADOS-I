#include <stdio.h>


void imprime(int n, int v[]){
    for(int i = 0; i < n; i++){
        printf("%d ", *(v + i)); //operador de indireção.Pega o valor naquele endereco
    }
}


int main(){

    int n;
    int *pn;
    pn = &n;
    printf("Informe a quantidade de valores: \n");
    scanf("%d", pn);
    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++){
        v[i] = 2 * v[i];
    }
    imprime(n, v);

    return 0;
}