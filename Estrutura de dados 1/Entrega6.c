#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto{
int *x;
int *y;
};

typedef struct ponto Ponto;

struct reta{
Ponto *p1;
Ponto *p2;
};

typedef struct reta Reta;

Reta* alocaMem(){
    Ponto *p1 = (Ponto*) malloc (sizeof(Ponto));
    p1 -> x = (int*) malloc (sizeof(int));
    p1 -> y = (int*) malloc (sizeof(int));

    Ponto *p2 = (Ponto*) malloc (sizeof(Ponto));
    p2 -> x = (int*) malloc (sizeof(int));
    p2 -> y = (int*) malloc (sizeof(int));

    Reta *minhaReta = (Reta*) malloc (sizeof(Reta));
    minhaReta -> p1 = p1;
    minhaReta -> p2 = p2;

    return minhaReta;
};

float getDistancia(Reta *minhaReta, float *distancia){
    float quad1 = 0, quad2 = 0;

    printf("Digite a posicao do primeiro ponto (x,y): ");
    scanf("%d %d", minhaReta -> p1 -> x, minhaReta -> p1 -> y);

    printf("Digite a posicao do segundo ponto (x,y): ");
    scanf("%d %d", minhaReta -> p2 -> x, minhaReta -> p2 -> y);

    quad1 = pow((*minhaReta -> p2 -> x) - (*minhaReta -> p1 -> x), 2);
    quad2 = pow((*minhaReta -> p2 -> y) - (*minhaReta -> p1 -> y), 2);
    
    *distancia = sqrt (quad1 + quad2);
    return 0;
};
int main(){
    float* distancia = 0;
    distancia = (float*)malloc(sizeof(float));
    Reta* retaMinha = alocaMem();
    getDistancia(retaMinha,distancia);
    printf("\nA distancia entre os dois pontos eh: %.3f\n",*distancia);
    free(retaMinha);
    free(distancia);
    return 0;
}