#include <stdio.h>
#include <stdlib.h>

#include "imagem.h"

//A imagem é composta de pixels: cada pixels tem as suas coordenadas (x e y); e seu valor 
//(fiquem a vontade para preencher)

struct pixel{
	int valor, x, y;
};

struct imagem{
	Pixel *pixels;
	int largura, altura;
};

Imagem *criarImagem(int largura, int altura) {
	Imagem *img;
	img = (Imagem*) malloc (sizeof(Imagem));
	img->altura = altura;
	img->largura = largura;
	img->pixels = (Pixel*) malloc(altura * largura * sizeof(img));
	return img;

}

void preencherImagem(Imagem *img){
	for (int i = 0; i < img->altura; i++)
		for (int j = 0; j < img->largura; j++)
			 setPixelValue(img, i, j, 0);
	
}
void imprimirImagem(Imagem *img){

	for (int i = 0; i < img->altura; i++){
		for (int j = 0; j < img->largura; j++){
			printf("%d ", getPixelValue(img, i, j));
		}
		printf("\n");
	}	
	
}
void liberarImagem(Imagem *img){
	free(img->pixels);
	free(img);
}
void setPixelValue(Imagem *img, int y, int x, int valor){
	int k;
	k = y * img->largura + x;
	img->pixels[k].valor = valor;
	img->pixels[k].y = y;
	img->pixels[k].x = x;

}
int getPixelValue(Imagem *img, int y, int x){
	int k;
	if ((y >= 0) && (x >= 0) && (y <= img->altura) && (x <= img->largura)){
		k = y * img->largura + x;
		return img->pixels[k].valor;
	} else {
		return -1;
	}
	
}
