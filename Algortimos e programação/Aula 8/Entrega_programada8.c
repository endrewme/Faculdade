#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define LINHAS 14
#define COLUNAS 60

void preencheMatrix(char image[LINHAS][COLUNAS]) {
    int i, j;
    strcpy(image[0],"   !      _\\\\   O     \\         ||\\_        \\\\            \\  ");
    strcpy(image[1],"   !          ==||     \\        \\\\           LL            \\ ");
    strcpy(image[2],"\\  !            //      \\        LL                          ");
    strcpy(image[3]," \\ !           _\\\\       \\         \\                         ");
    strcpy(image[4],"__\\!______________________\\         \\_______________________ ");
    strcpy(image[5],"                                                             ");
    strcpy(image[6],"                                                             ");
    strcpy(image[7],"                                                       !###  ");
    strcpy(image[8],"                                                       ! ### ");
    strcpy(image[9],"#                                                      !  ## ");
    strcpy(image[10],"##                                                     !   #");
    strcpy(image[11],"###________O_______               @   _________________!____");
    strcpy(image[12]," ##!     ==||       \\           /            O          \\   ");
    strcpy(image[13],"  #!       //        \\          \\O         /||--         \\  ");
}

void printMatrix(char image[LINHAS][COLUNAS]) {
    int i, j;
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("%c",image[i][j]);
        }
        printf("\n");
    }
}

void cima(char image[LINHAS][COLUNAS]) {
    char copia[COLUNAS];
    for ( int i = 0; i < COLUNAS; i++){
        copia[i]=image[0][i];
    }
    for ( int i = 0; i < LINHAS; i++){
        for ( int j = COLUNAS; j > 0; j--){
            image[i][j]=image[i+1][j];
        }
    }
    for ( int i = 0; i < COLUNAS; i++){
        image[LINHAS-1][i]=copia[i];
    }
}

void baixo(char image[LINHAS][COLUNAS]) {
    char copia[COLUNAS];
    for ( int i = 0; i < COLUNAS; i++){
        copia[i]=image[LINHAS-1][i];
    }
    for ( int i = LINHAS-1; i > 0; i--){
        for ( int j = 0; j < COLUNAS; j++){
            image[i][j]=image[i-1][j];
        }
    }
    for ( int i = 0; i < COLUNAS; i++){
        image[0][i]=copia[i];
    }
}

void esquerda(char image[LINHAS][COLUNAS]) {
    char copia[LINHAS];
    for ( int i = 0; i < LINHAS+1; i++){
        copia[i]=image[i][0];
    }
    for ( int i = 0; i < LINHAS; i++){
        for ( int j = 0; j < COLUNAS-1; j++){
            image[i][j]=image[i][j+1];
        }
    }
    for ( int i = 0; i < LINHAS; i++){
        image[i][COLUNAS-1]=copia[i];
    }
}

void direita(char image[LINHAS][COLUNAS]) {
    char copia[LINHAS];
    for ( int i = 0; i < LINHAS+1; i++){
        copia[i]=image[i][COLUNAS-1];
    }
    for ( int i = 0; i < LINHAS; i++){
        for ( int j = COLUNAS-1; j > 0; j--){
            image[i][j]=image[i][j-1];
        }
    }
    for ( int i = 0; i < LINHAS; i++){
        image[i][0]=copia[i];
    }
}

int menu() {
    int opcao;
    printf("\n\n");
    printf("Menu:\n");
    printf("1 - Cima\n");
    printf("2 - Baixo\n");
    printf("3 - Esquerda\n");
    printf("4 - Direita\n");
    printf("5 - Sair\n");
    printf("Digite uma opcao: ");
    //scanf("%d", &opcao);
    opcao = getch();
    return opcao;
}

int main() {
    char image[LINHAS][COLUNAS];
    int opcao;

    preencheMatrix(image);
    do {
        printMatrix(image);
        opcao = menu();
        switch(opcao) {
        case '1': //deslocar para cima
            cima(image);
            break;
        case '2': //deslocar para baixo
            baixo(image);
            break;
        case '3': //deslocar para esquerda
            esquerda(image);
            break;
        case '4': //deslocar para direita
            direita(image);
            break;
        case '5':
            printf("Tchau!\n");
            break;
        }
        system("cls");
    } while(opcao != '5');
}