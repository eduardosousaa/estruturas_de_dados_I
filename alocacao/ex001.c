/* 
Um usuário vai informar uma série de números. O usuário não sabe quantos serão, só sabe que a condição de parada será -1. Ao final, deverá informar todos os números que o usuário digitou e métricas estatísticas como: 
- média; 
- desvio padrão;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(NULL));
    //n: quantidade de números no conjunto de dados.
    int n = 0; 
    float *vet1 = NULL, x = 0.0, soma = 0.0, dp = 0.0, media = 0.0;

    //vet1 = (int * ) malloc (n * sizeof(int));
    while (x != -1){
        scanf("%f", &x);
        if (x == -1) {
            break;
        }
        vet1 = (float *) realloc (vet1, sizeof(float) * (n + 1));
        vet1[n] = x;
        soma += vet1[n];
        n++;
    }
    for (int i = 0; i < n; i++){
        printf("%.2f \n", vet1[i]);
    }

    //Cálculo da média
    media = soma / n;

    for (int j = 0; j < n; j++){
        dp += pow((vet1[j] - media),2);
    }
    dp = sqrt(dp / (n - 1));


    printf("Desvio padrao: %.2f\n", dp);
    printf("Media: %.2f\n", media);
    
}