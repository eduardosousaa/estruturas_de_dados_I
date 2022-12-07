#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int *v1, *v2, m, x;
    printf("Tamanho do vetor: ");
    scanf("%d", &m);
    printf("Informe um valor para X: ");
    scanf("%d", &x);

    v1 = (int *) malloc (m * sizeof(int));
    v2 = (int *) malloc (x * sizeof(int));
    
    if (v1 == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    for (int i = 0; i < m; i++)
        v1[i] = rand() % x;

    for (int i = 0; i < x; i++)
        v2[i] = 0;

    for (int i = 0; i < x; i++)
        v2[v1[i]]++;

    for (int i = 0; i < x; i++)
        printf("O valor %d ocorreu %d vezes \n", i, v2[i]);
}