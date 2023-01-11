#include <stdio.h>
#include <stdlib.h>

#include "str.h"

char ler(){
    char string1[50];
    scanf("%c\n",&string1);

    return string1;
}

char concatenar(char * str1, char * str2){
    return *str1 + *str2;
}

char iguais(char * str1, char * str2){
    if (*str1 == *str2){
        return 'Iguais';
    } else {
        return 'Diferentes';
    }
}

int tamanho(char * str){
    int cont = 0;
    for(int x; x < str; x++){
        cont ++;
    }
    return cont;
}

