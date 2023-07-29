#include<stdio.h>
#include<stdlib.h>

 int SomaS(int *vet, int n, int S){
    if(S == 0)
        return 1;
    if(S < 0 || (S > 0 && n == 0))
        return 0;    
    return (SomaS(vet, n-1, S-vet[n])||SomaS(vet, n-1, S));
 }
 int main(){
    int n = 0, S = 0;
    printf("Escolha o tamanho do vetor: ");
    scanf("%d", &n);
    int* vet = (int*) malloc (sizeof(int) * n);
    printf("Agora escolha os valores do vetor.\n");
    for (int i = 0; i < n; i++){
        printf("Posicao %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Agora o valor de S: ");
    scanf("%d", &S);
    if(SomaS(vet, n, S))
        printf("Existe soma para o valor de S: %d", S);
    else
        printf("Nao existe somas para o valor de S: %d", S);
    free(vet);
    return 0;
 }