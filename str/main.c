#include <stdio.h>
#include <stdlib.h>

#include "str.h"

int main(){
    char *s1, *s2; 
    int t1 = 0, t2 = 0;

    //Leitura
    s1 = lerStr();
    s2 = lerStr();
    
    //Tamanho
    t1 = tamanho(s1);
    t2 = tamanho(s2);
    printf("Tamanho do nome %s = %d\n", s1, t1);
    printf("Tamanho do nome %s = %d\n", s2, t2);
    
    //Comparar string
    int verifica = 0;
    verifica = comparar(s1, s2);
    if (verifica == 1){
        printf("Nomes diferentes! \n");
    } else {
        printf("Nomes iguais! \n");
    }
    
    //Concatenar
    concatenar(s1, s2);
    printf("%s\n", s1);

    //liberar
    liberar(s1);
    liberar(s2);
}
