#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define LINHAS 8
#define COLUNAS 19
int eixoX=0,eixoY=0,count1,count2,winloss;
char opcao;
void random(char image[LINHAS][COLUNAS]){
    int randX,randY,quantiaX;
    srand(time(NULL));
    quantiaX=10+rand()%15;
    for (int i = 0; i <= quantiaX; i++){
        randY=rand()%9;
        randX=rand()%20;
        image[randY][randX]='X';
    }
    if(image[0][0]=='X')
        image[0][0]='M';
}
void preencheMatrix(char image[LINHAS][COLUNAS]) {
    strcpy(image[0],"M******************");
    strcpy(image[1],"*******************");
    strcpy(image[2],"*******************");
    strcpy(image[3],"*******************");
    strcpy(image[4],"*******************");
    strcpy(image[5],"*******************");
    strcpy(image[6],"*******************");
    strcpy(image[7],"*******************");
    strcpy(image[8],"*******************");
}
void printMatrix(char image[LINHAS][COLUNAS]) {
    int i, j;
    printf("\n");
    for(i = 0; i < LINHAS; i++) {
        printf("\t");
        for(j = 0; j < COLUNAS; j++) {
            printf("%c",image[i][j]);
        }
        printf("\n");
    }
}
void contador(char image[LINHAS][COLUNAS]){
    int i, j;
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            if(image[i][j]=='*'){
                count1++;
            }
        }
    }    
}
void cima(char image[LINHAS][COLUNAS]) {
    image[eixoY][eixoX]='_';
    eixoY-=1;
    if (eixoY<0)
        eixoY=0;
    if (image[eixoY][eixoX]=='*')
        count2++;
    else if(image[eixoY][eixoX]=='X'){
        winloss=1;
        opcao='f';
    }
    image[eixoY][eixoX]='M';
}
void baixo(char image[LINHAS][COLUNAS]) {
    image[eixoY][eixoX]='_';
    eixoY+=1;
    if (eixoY>7)
        eixoY=7;
    if (image[eixoY][eixoX]=='*')
        count2++;
    else if(image[eixoY][eixoX]=='X'){
        winloss=1;
        opcao='f';
    }
    image[eixoY][eixoX]='M';
}
void esquerda(char image[LINHAS][COLUNAS]) {
    image[eixoY][eixoX]='_';
    eixoX-=1;
    if (eixoX<0)
        eixoX=0;
    if (image[eixoY][eixoX]=='*')
        count2++;
    else if(image[eixoY][eixoX]=='X'){
        winloss=1;
        opcao='f';
    }
    image[eixoY][eixoX]='M';
}
void direita(char image[LINHAS][COLUNAS]) {
    image[eixoY][eixoX]='_';
    eixoX+=1;
    if (eixoX>18)
        eixoX=18;
    if (image[eixoY][eixoX]=='*')
        count2++;
    else if(image[eixoY][eixoX]=='X'){
        winloss=1;
        opcao='f';
    }
    image[eixoY][eixoX]='M';
}
void menu() {
    printf("\n\n"
    "Joysticks:\n"
    "W - Cima\n"
    "A - Esquerda\n"
    "S - Baixo\n"
    "D - Direita\n"
    "F - Sair\n"
    "Digite uma opcao: ");
}
int main() {
    char image[LINHAS][COLUNAS];
    preencheMatrix(image);
    random(image);
    contador(image);
    do {
        printf("Pontuacao: %d\n",count2*100);
        printf("Segundos: %d\n",clock()/CLOCKS_PER_SEC);
        printMatrix(image);
        menu();
        opcao = getch();
        opcao = tolower(opcao);
        switch(opcao) {
        case 'w': //deslocar para cima
            cima(image);
            break;
        case 's': //deslocar para baixo
            baixo(image);
            break;
        case 'a': //deslocar para esquerda
            esquerda(image);
            break;
        case 'd': //deslocar para direita
            direita(image);
            break;
        case 'f':
            break;
        }
        if(count1==count2){
            opcao='f';
        }
        system("cls");
    } while(opcao != 'f');
    if(winloss)
        printf("\n\tGame Over: Voce perdeu :(\n");
    else if(count1==count2)
        printf("\n\tParabens voce ganhou!!!\n");
    printf("Voce colheu %d hectares de soja em %d segundos\n",count2,clock()/CLOCKS_PER_SEC);
}