#include <stdio.h>
#include <stdlib.h>

#include "str.h"

int main(){
    char *n1, *n2, s1[50], s2[50]; 
    int t1 = 0, t2 = 0;

    //Leitura
    scanf("%s\n", s1);
    scanf("%s", s2);
    
    //Tamanho
    t1 = tamanho(s1);
    t2 = tamanho(s2);

    //Alocação
    n1 = (char*) malloc (t1 * sizeof(char));
    n2 = (char*) malloc (t2 * sizeof(char));

    for (int i = 0; i < t1; i++)
        n1[i] = s1[i];
    for (int i = 0; i < t2; i++)
        n2[i] = s2[i];
    
    //Comparar string
    int verifica = 0;
    verifica = comparar(n1, n2);
    if (verifica == 1){
        printf("Nomes diferentes! \n");
    } else {
        printf("Nomes iguais! \n");
    }
    
    //Concatenar
    concatenar(n1, n2);
    printf("%s\n", n1);

    //liberar
    liberar(n1);
}
