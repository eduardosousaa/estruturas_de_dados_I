#include <stdio.h>

float calculaJuros(float valorInicial, int numMeses, float taxaJuros){
    if (numMeses == 0) {
        return valorInicial;
    } else {
        valorInicial = valorInicial * (1 + taxaJuros);
        return calculaJuros(valorInicial, numMeses - 1, taxaJuros);
    }
}

int main(){
    int numMeses;
    float valorInicial, taxaJuros, total;

    printf("Digite o valor inicial: \n");
    scanf("%f", &valorInicial);
    printf("Digite o numero de meses: \n");
    scanf("%d", &numMeses);
    printf("Digite a taxa de juros: \n");
    scanf("%f", &taxaJuros);
    total = calculaJuros(valorInicial, numMeses, taxaJuros);
    printf("Total = %.2f R$", total);
}