#include <stdio.h>

int multiplica(int n, int m){
    if (n == 0 || m == 0){
        return 0;
    } else if (n == 1){
        return m;
    } else {
        return m + multiplica(n-1, m);
    }

}

int main(){
    int n, m, x;
    scanf("%d", &n);
    scanf("%d", &m);

    x = multiplica(n, m);
    printf("%d \n", x);

    return 0;
}