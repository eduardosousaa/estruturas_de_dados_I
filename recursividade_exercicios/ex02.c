#include <stdio.h>

int escreve(int k){
    if (k >= 0)
        printf("%d \n", k);
        escreve(k-1);
}

int main(){
    int k;
    scanf("%d", &k);
    escreve(k);
    
    return 0;
}