#include <stdio.h>

int soma(int k){
    if (k == 0)
        return k;
    return k + soma(k-1);
}

int main(){
    int k;
    scanf("%d", &k);
    printf("%d", soma(k));
    
    return 0;
}