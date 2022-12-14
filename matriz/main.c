#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **preencherMatriz(int lin, int col){
    int **mat;

    mat = (int**) malloc (lin * sizeof(int*));

    for (int i = 0; i < lin; i++){
        mat[i] = (int*) malloc (sizeof(int) * col);
    }

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++){
            mat[i][j] = rand() % 256;
        }  
    }
    return mat;
}
/*
int **maiorMenorMedia(int col, int lin, int **mat){
    
}
*/
void mostrarDados(int lin, int col, int **mat){
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++){
            printf("%d ", mat[i][j]);
        }  
        printf("\n");
    }
}
/*
void mostrarMaiorMenorMedia(int *val, int t){

}
*/

void liberarMemoria(int **m, int lin){
    for (int i = 0; i < lin; i++)
    {
        free(m[i]);
    }
    free(m);
    
}

int main(){
    int **mat, l, c;
    l = 3;
    c = 9;
    
    mat = preencherMatriz(l, c);
    mostrarDados(l, c, mat);
    liberarMemoria(mat, l);
    return 0;
}