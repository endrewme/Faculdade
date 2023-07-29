#include<stdio.h>
#include<stdlib.h>

void imprimeVetor(int *vet, int n, int *inv, int mem){
    static int i = 0;
    inv[n] = vet[i];
    printf("Vetor [%d]: %d\n", n, inv[n]);
    i++, n--;
    if(i < mem)
        return imprimeVetor(vet, n, inv, mem);
    else return 0;
}

int main(){
    int n = 0, mem = 0;
    printf("Escolha o tamanho do vetor: ");
    mem = n;
    scanf("%d", &n);
    int* vet = (int*) malloc (sizeof(int) * n);
    int* inv = (int*) malloc (sizeof(int) * n);
    printf("Agora escolha as posicoes do vetor.\n");
    for (int i = 0; i < n; i++){
        printf("Posicao %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\n");
    imprimeVetor(vet, n, inv, mem);
    free(vet);
    free(inv);
}