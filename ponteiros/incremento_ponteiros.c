#include <stdio.h>


int main(){

    int n;
    int *pn = &n;
    printf("Informe a quantidade de valores: \n");
    scanf("%d", pn);
    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int menor = 0;
    int *pv = v + 1;
    for(int i = 1; i < n; i++){
        if(*pv < v[menor]){
            menor = i;
        }
        pv++;
    }

    printf("Indice com o menor valor: [%d] --> %d", menor, v[menor]);
}