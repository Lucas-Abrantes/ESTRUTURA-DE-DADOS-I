#include <stdio.h>

void ler(int n, int v[]){
    for(int i = 0; i < n; i++){
        scanf("%d", v + i);
    }
}

int main(){
    
    int n;
    int *pn;
    pn = &n;

    printf("Informe a quantidade de valores: \n");
    scanf("%d", pn);
    int v[n];
    ler(n, v);

    int temp = v[0]; // armazena o primeiro elemento
    v[0] = v[n-1]; // vetor na posicao zero recebe o elemento da ultima posicao
    v[n-1] = temp; // recebe o elemento da primeira posicao

    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    return 0;
}