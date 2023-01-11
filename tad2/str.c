#include <stdio.h>
#include <stdlib.h>

#include "str.h"

char ler(){
    char string1[50];
    scanf("%c", &string1);
}


char concatenar(char *str1, char *str2){
    int i = 0, j = 0;
    for ( i = 0; i != '\0'; i++){
        for ( j = 0; j != '\0'; j++){
            str1[i] = str2[j];
        }
    }
    str1[i] = '\0';
    return str1;
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

void liberar(char * str){
    free(str);
}


