#include <stdio.h>


int main(){
    int n;
    int *pn;
    pn = &n;
    printf("Digite os valores: \n");
    scanf("%d", pn);
    int v[n];
    // não é necessário colocar o & para v, pois um vetor já um endereço
    // para a posição de cada elemento
    int *pv1 = v;
    int *pv2 = &v[0];
    if(pv1 == pv2){
        printf("iguais\n");
    }
    else{
        printf("Diferentes");
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            printf("O numero: %d  e par!\n", v[i]);
        }
        else{
            printf("O numero: %d e impar!\n", v[i]);
        }
    }
    return 0;
}