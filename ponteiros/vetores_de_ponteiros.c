#include <stdio.h>


int main(){

    int n;
    float e1[2];
    float e2[2];
    float e3[2];

    float *estudante[3];
    estudante[0] = e1;
    estudante[1] = e2;
    estudante[2] = e3;

    printf("Digite a quantidade de estudantes:");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f %f", &estudante[i][0], &estudante[i][1]);
    }

    for(int i = 0; i < n; i++){
        float media = (estudante[i][0] + estudante[i][1])/2;
        printf("Media do aluno %d: %.2f\n", i + 1, media);
    }
}