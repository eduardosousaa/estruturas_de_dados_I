#include <stdio.h>

int expo(int b, int p){
    if (p == 0) {
        return 1;
    }
    return expo(b, p-1) * b;
}

int main(){
    int b, p;
    scanf("%d\n", &b);
    scanf("%d", &p);
    printf("Resultado da exponenciacao: %d", expo(b, p));

    return 0;
}