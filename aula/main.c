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

void mostrarDados(int lin, int col, int **mat){
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++){
            printf("%d ", mat[i][j]);
        }  
        printf("\n");
    }
}


int *maiorMenorMedia(int lin, int col,  int **mat){
    int cont = 0, *val;

    val = (int*) malloc (sizeof(int) * lin);

    val[0] = mat[0][0];
    val[1] = mat[0][0];
    val[2] = 0;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            if (val[0] > mat[i][j]){
                val[0] = mat[i][j];
            }
            if (val[1] < mat[i][j]){
                val[1] = mat[i][j];
            }
            val[2] += mat[i][j];
            cont++; 
        }
       
    }
    val[2] = val[2] / cont;
    return val;
}


void mostrarMaiorMenorMedia(int *val, int t){
    printf("Maior valor: %d\n", val[1]);
    printf("Menor valor: %d\n", val[0]);
    printf("Media: %d\n", val[2]);
    printf("\n");
}


void liberarMemoria(int **m, int lin){
    for (int i = 0; i < lin; i++)
    {
        free(m[i]);
    }
    free(m);
    
}

int main(){
    int **mat, l, c, *valor;
    l = 3;
    c = 3;
    
    srand(time(NULL));
    mat = preencherMatriz(l, c);
    mostrarDados(l, c, mat);
    valor = maiorMenorMedia(l, c, mat);
    mostrarMaiorMenorMedia(valor, l);
    liberarMemoria(mat, l);
    
    return 0;
}