#include <stdio.h>
#include <stdlib.h>
#include "imagem.h"

int main(){
	Imagem *img;

	img = criarImagem(5,5);
	preencherImagem(img);
	imprimirImagem(img);
	
	/*
	1 - Comente o que acontece com as linhas 15 e 16

	// Esse primeiro não vai dar certo, pois não vai dar certo atribuir um valor ao pixels dentro do arquivo main.
	img->pixels[10].valor = 255;
	print("%d ", img->pixels[10].valor);
	*/

	/*
	2 - Comente o que acontece com as linhas 20 e 21

	//Esse segundo vai funcionar, pois ele está fazendo a chamada de uma função que está em outro arquivo de maneira correta.
	setPixelValue(img, 3,2, 255);
	printf("Valor da posicao 3,2 %d\n", getPixelValue(img, 3,2));
	*/

	liberarImagem(img);

	return 0;
}