#include <stdio.h>

int somaVetor(int *vet, int n){
    if (n == 1)
        return vet[0];
    return somaVetor(vet, n-1) + vet[n-1];
}

int main(){
    int vet[5] = {4, 3, 6, 2, 5};
    printf("A soma dos elementos do vetor e %d", somaVetor(vet, 5));
}