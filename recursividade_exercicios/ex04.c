#include <stdio.h>

int somaAB(int a, int b){
    if (a == 0 && b == 1)
        return 0;
    
}

int main(){
    int a, b;
    scanf("%d \n", &a);
    scanf("%d", &b);
    printf("%d", somaAB(a, b));

    return 0;
}