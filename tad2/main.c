#include <stdio.h>
#include <stdlib.h>

#include "str.h"

int main(){
    char n1[] = {"Eduardo"}; 
    char n2[] = {"Carrros"};
    int x = 0;

    x = tamanho(n1);
    printf("%d\n", x);

    int verifica = 0;
    verifica = comparar(n1, n2);
    if (verifica == 1){
        printf("Nomes diferentes! \n");
    } else {
        printf("Nomes iguais! \n");
    }

    liberar(n1);

    char conca;
    conca = concatenar(n1, n2);
    printf("%c\n", conca);

    return 0;
}