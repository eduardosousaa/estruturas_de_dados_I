#include <stdio.h>
#include <stdlib.h>

#include "str.h"

char *lerStr(){
    char *s;

    s = (char*) malloc (50 * sizeof(s));
    if (s == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }
    scanf("%s", s);

    return s;
}

int comparar(char * str1, char * str2){
    int x;
    for (x = 0;; x++){
        if (str1[x] != str2[x]){
            return 1;
        }
        if (str1[x] == '\0' && (str2[x] == '\0')){
            break;
        }
    }
    return 0;
}

int tamanho(char * str){
    int x;
    for(x = 0;; x++){
        if (str[x] == '\0')
        break;
    }
    return x;
}

char concatenar(char *str1, char *str2){
    int cont = 0, i = 0;

    while (str1[cont] != '\0'){
        cont++;
    }

    str1[cont] = ' ';

    for ( i = 0; str2[i] != '\0'; i++){
        str1[cont] = str2[i];
        cont++;
    }
    str1[cont]= '\0';
}

void liberar(char * str){
    free(str);
}

