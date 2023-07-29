#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    system("color 5");
    //declaração de variáveis
    float média[] = {0},notas[] = {0};
    //aprensentação 1
    printf("\nDigita sua nota na primeira prova do primeiro semestre: ");
    scanf("%f", &notas[0]);
    printf("\nDigita sua nota na segunda prova do primeiro semestre: ");
    scanf("%f", &notas[1]);
    //cálculo 1
    média[0]=(notas[0]+notas[1])/2;
    //média 1
    printf("\nSua media no primeiro semestre eh: %.1f\n\n", média[0]);
    //apresentação 2
    printf("\nDigita sua nota na primeira prova do segundo semestre: ");
    scanf("%f", &notas[2]);
    printf("\nDigita sua nota na segunda prova do segundo semestre: ");
    scanf("%f", &notas[3]);
    //cálculo 2
    média[1]=(notas[2]+notas[3])/2;
    //média 2
    printf("\nSua media no segundo semestre eh: %.1f\n\n", média[1]);
    //cálculo e média geral
    média[2]=(média[0]+média[1])/2;
    printf("\nSua media geral eh: %.1f\n\n",média[2]);
    printf("\nPara ver o resumo aperte ENTER");
    //resumo
    getch();
    system("cls");
    printf("\n       Media do primeiro semestre:%.1f\n",média[0]);
    printf("\n       Media do segundo semestre:%.1f\n",média[1]);
    printf("\n\t     MEDIA GERAL:%.1f\n\n",média[2]);
    if(média[2]>=6){
        printf("\n\t   VOCE ESTA NA MEDIA\n\n");
    }
    else{
        printf("\n\t   VOCE NAO ESTA NA MEDIA\n\n");
    }
    system("pause");
    return 0;
}