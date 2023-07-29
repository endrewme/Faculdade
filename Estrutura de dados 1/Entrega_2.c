#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int negativo(int *vetor, int N){
    int count=0;
    for (int i = 0; i < N; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
        if (vetor[i]<0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Digite um numero para o tamanho do vetor:");
    scanf("%d",&n);
    int* vetor=(int*)malloc(sizeof(int)*n);
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        vetor[i]=-50+rand()%100;
    }
    printf("O numero de valores negativos do vetor eh: %d",negativo(vetor,n));
    return 0;
}