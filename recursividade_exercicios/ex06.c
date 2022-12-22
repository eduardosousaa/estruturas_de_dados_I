#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaSequencial(int v, int *vet, int tam){
    if (vet[tam] == v){
        return vet[tam];
    } 
    else if (tam == 0){
         return -9; //Significa que o valor não foi encontrado
    }
    
    return buscaSequencial(v, vet, tam - 1);
}

int main(){
    int v, vet[5], tam;
    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        vet[i] = rand() % 10;
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }

    tam = sizeof(vet)/sizeof(vet[0]); //Tamanho do vetor

    printf("\nDigite um valor: \n");
    scanf("%d", &v);
    printf("Valor: %d", buscaSequencial(v, vet, tam));
    
    return 0;
}