#include <stdio.h>

int main() {
    int somatario = 0, menor_valor = 0, maior_valor = 0, i = 0, X = 0;
    float media;

    while (X != -1){
        scanf("%d", &X);
        if (X == -1) {
            break;
        }
        somatario += X;
        if (i == 0) {
            menor_valor = X;
            maior_valor = X;
        }

        if (X > maior_valor) {
            maior_valor = X;
        }
        if (X < menor_valor) {
            menor_valor = X;
        }
        i++;
    }
    media = somatario / i;
    printf("Somatório: %d\n", somatario);
    printf("MÃ©dia: %f\n", media);
    printf("Menor valor: %d\n", menor_valor);
    printf("Maior valor: %d\n", maior_valor);
} 
