#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10
#define TEMPO 5

int**** alocaMatriz4D(int N){
    N=10;
    int**** matriz;
    matriz = (int****) malloc (sizeof(int***) * N);
    for(int i = 0; i < N; i++)
        matriz[i] = (int***) malloc (sizeof(int**) * N);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matriz[i][j] = (int**) malloc (sizeof(int*) * N);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            for(int l = 0; l < N; l++)
                matriz[i][j][l] = (int*) malloc (sizeof(int) * N);
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                for (int l = 0; i < N; l++)
                matriz[i][j][l] = (int*) malloc (sizeof(int) * N);
    return matriz;
}
int main(){
    int N=4;
    int d0 = 10;
    int* d1 = &d0;
    int** d2 = &d1;
    int*** d3 = &d2;
    int**** d4 = &d3;

    int*** matriz;
    matriz = (int***) malloc (sizeof(int**)*LINHAS);
    
    for(int i = 0; i < LINHAS; i++)
        matriz[i] = (int**) malloc (sizeof(int*)*COLUNAS);
    for (int i = 0; i < COLUNAS; i++)
        matriz[i] = (int*) malloc (sizeof(int)*TEMPO);
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            for (int l = 0; i < TEMPO; l++){
                matriz[i][j][l] = 0;
            }
        }
    }
    int matrix[10][10][10][10];
    int**** matriz4d = alocaMatriz4D(10);
    matriz4d[0][0][0][0] = 0;

    // for (int i = 0; i < N; i++){
    //     for (int j = 0; j < N; j++){
    //         for (int l = 0; l < N; i++){
    //             printf("%d ", matrix[i][j][l]);
    //         }
    //     printf("\n");
    //     }
    // printf("\n");
    // }

    for(int i = 0; i < LINHAS; i++)
        for(int j = 0; j < COLUNAS; j++)
            for(int l = 0; l < TEMPO; l++)
                free(matriz[i][j][l]);
    free(matriz);
}