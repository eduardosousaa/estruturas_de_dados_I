/* 
Um usuário vai informar uma série de números. O usuário não sabe quantos serão, só sabe que a condição de parada será -1. Ao final, deverá informar todos os números que o usuário digitou e métricas estatísticas como: 
- média; 
- desvio padrão;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int *vet1 = NULL, i = 0;
    float x = 0, soma = 0, dp = 0, media = 0;

    //vet1 = (int * ) malloc (n * sizeof(int));

    while (x != -1){
        scanf("%f", &x);
        if (x == -1) {
            break;
        }
        vet1 = (float *) realloc (vet1, sizeof(float) * (i + 1));
        vet1[i] = x;
        soma += vet1[i];
        i++;
    }
    for (int j = 0; j < i; j++){
        printf("%f \n", vet1[j]);
    }

    media = soma / i;

    for (int y = 0; y < i; y++){
        dp += pow((vet1[y] - media),2);
    }
    

    /*dp = pow(dp, 2);*/
    dp = dp / i;
    dp = sqrt(dp);
    printf("Desvio padrao: %f\n", dp);
    printf("Media: %f\n", media);
    
}