#include<stdio.h>
#include<stdlib.h>

void imprimeVetor(int *vet, int n){
    static int i = 0;
    printf("Vetor [%d]: %d\n", i+1, vet[i]);
    i++;
    if(i < n)
        return imprimeVetor(vet, n);
    else return 0;
}

int main(){
    int n = 0;
    printf("Escolha o tamanho do vetor: ");
    scanf("%d", &n);
    int* vet = (int*) malloc (sizeof(int) * n);
    printf("Agora escolha as posicoes do vetor.\n");
    for (int i = 0; i < n; i++){
        printf("Posicao %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\n");
    imprimeVetor(vet, n);
    free(vet);
}