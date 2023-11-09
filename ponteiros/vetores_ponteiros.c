#include <stdio.h>

int main(){

    float e1[2];
    float e2[2];
    float e3[2];
    // vetor que armazena outros três vetores
    float *estudantes[3];
    estudantes[0] = e1;
    estudantes[1] = e2;
    estudantes[2] = e3;
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        // pego os próximos endereços e somo com 0, 1 ....
        scanf("%f %f", (estudantes[i] + 0), (estudantes[i] + 1));
    }

    for (int i = 0; i < n; i++){
        if(*(estudantes[i] + 0) > *(estudantes[i] + 1)){
            printf("Nota --->  %.1f\n", *(estudantes[i] + 0));
        }
        else{
            printf("Nota ---> %.1f\n", *(estudantes[i] + 1));
        }
    }
    
}