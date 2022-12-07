#include <stdio.h>

int reverso(int n, int invertido){
    if (n == 0) {
        return invertido;
    }
    else {
        return reverso(n / 10, invertido * 10 + n % 10);
    }

}

int main(){
    int n, r;
    scanf("%d", &n);
    r = reverso(n, 0);
    printf("%d", r);

    return 0;
}