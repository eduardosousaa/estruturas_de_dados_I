#include <stdio.h>

int calculaJuros(float valorInicial, int numMeses, float taxaJuros){
    
}

int main(){
    int numMeses;
    float valorInicial, taxaJuros;

    scanf("Valor Inicial: %d\n", &valorInicial);
    scanf("Numero de meses: %d\n", &numMeses);
    scanf("Taxa de Juros; %d", &taxaJuros);
    printf("Resultado: %.2f", calculaJuros(valorInicial, numMeses, taxaJuros));
}