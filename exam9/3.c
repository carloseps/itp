#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int nlin, ncol;
    int **mat;
} Matrix;

Matrix createMatrix(int nlin, int ncol){
    Matrix m;
    m.ncol = ncol; m.nlin = nlin;
    int aux;
    for (int i = 0; i < m.nlin; i++){
        for (int j = 0; i < m.ncol; i++){
            scanf("%d", &aux);
            m.mat[i][j] = aux;
            printf("%d ", m.mat[i][j]);
        }
    }
}

// void readMatrix(Matrix *m){

// }

// void printMatrix(Matrix *m){

// }

// void destroyMatrix(Matrix **m){

// }

int main(){
    int lin, col;
    Matrix* mat;

    scanf("%i %i", &lin, &col);
    mat = createMatrix(lin, col);
    // readMatrix(mat);
    // printMatrix(mat);
    // destroyMatrix(&mat);
    if (mat == NULL){
        printf("OK\n");
        return 0;
    }
}