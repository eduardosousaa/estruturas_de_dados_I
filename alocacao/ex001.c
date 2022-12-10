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
    int *vet1 = NULL, x = 0, i = 0;

    //vet1 = (int * ) malloc (n * sizeof(int));

    while (x != -1){
        scanf("%d", &x);
        if (x == -1) {
            break;
        }
        vet1 = (int *) realloc (vet1, sizeof(int) * (i + 1));
        vet1[i] = x;
        i++;
    }

    for (int j = 0; j < i; j++){
        printf("%d \n", vet1[j]);
    }

}