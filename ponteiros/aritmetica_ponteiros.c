#include <stdio.h>


int main(){
    int n;
    int *pn;
    pn = &n;
    printf("Digite a quantidade de valores: \n");
    scanf("%d", pn);
    int v[n];
    for(int i =0; i < n; i++){
        scanf("%d", v + i);
    }

    printf("endereco: %d\n", v); // retorna o endereco do vetor
    int menor = *(v + 0); // pega o valor contido no vetor

    for(int i = 0; i < n; i++){
        if(*(v + i) < menor){
            menor = *(v + i);
        }
    }
    printf("Menor: %d", menor);
    return 0;
}