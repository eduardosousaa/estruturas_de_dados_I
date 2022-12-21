int fatorial(int n){
    int fat;
    if (n <= 1)
        return 1;
    fat = n * fatorial(n-1);
    return fat;
}

int main(){
    int n, x;
    scanf("%d", &n);
    x = fatorial(n);
    printf("%d", x);

    return 0;
}