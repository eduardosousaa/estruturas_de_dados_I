#include <stdio.h>

double calculaJuros(double valorInicial, int numMeses, double taxaJuros){
    int total = 0;
    if (numMeses == 0) {
        return valorInicial;
    } else {
        valorInicial = valorInicial * (1 + (taxaJuros / 100));
        return calculaJuros(valorInicial, numMeses - 1, taxaJuros);
    }
}

int main(){
    int numMeses;
    double valorInicial, taxaJuros, x;

    scanf("%lf\n", &valorInicial);
    scanf("%d\n", &numMeses);
    scanf("%lf", &taxaJuros);
    x = calculaJuros(valorInicial, numMeses, taxaJuros);
    printf("%.2lf", x);
}