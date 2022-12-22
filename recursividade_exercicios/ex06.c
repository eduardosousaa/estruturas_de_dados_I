#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaSequencial(int valor, int *vet, int tam){
    if (vet[tam] == valor){
        return vet[tam]; 
    } 
    else if (tam == 0){
         return -1; //Significa que o valor não foi encontrado
    }
    return buscaSequencial(valor, vet, tam - 1);
}

int main(){
    int valor, *vet, tam, busca;
    srand(time(NULL));

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int *) malloc (tam * sizeof(int));

    if (vet == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    for (int i = 0; i < tam; i++){
        vet[i] = rand() % 256;
    }

     //Imprimir o vetor
    for (int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    

    printf("\nDigite um valor para busca: ");
    scanf("%d", &valor);
    busca = buscaSequencial(valor, vet, tam);
    if (busca == -1) {
        printf("Valor nao encontrado :(");
    } else {
        printf("O valor %d foi encontrado :)", busca);
    }
    
    return 0;
}