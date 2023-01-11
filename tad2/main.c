#include <stdio.h>
#include <stdlib.h>

#include "str.h"

int main(){
    char x1, x2;
    x1 = ler();
    x2 = ler();
    printf("%c\n", concatenar(x1, x2));
    printf("%c\n", iguais(x1, x2));
    printf("%d\n", tamanho(x1));

    return 0;
}