#include <stdio.h>

int somaAB(int a, int b){
    if (b == a + 1)
        return a + b;
    return a + somaAB(a+1, b);
}

int main(){
    int a, b;
    scanf("%d \n", &a);
    scanf("%d", &b);
    if (a < b){
        printf("%d", somaAB(a, b));
    } else {
        printf("%d", somaAB(b, a));
    }

    return 0;
}