#include <stdio.h>

void func(int n, int x){
    if (x <= n){ //Caso base
        printf("%d \n", x); 
        return func(n, x+1); //Caso geral
    }
}
int main(){
    int n, x;

    scanf("%d", &n);
    scanf("%d", &x);
    func(n, x);
    return 0;
}