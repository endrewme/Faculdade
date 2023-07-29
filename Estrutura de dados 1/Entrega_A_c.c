#include<stdio.h>
#include<stdlib.h>

int imprimeVetor(int *vet, int n){
    static int i = 0;
    static int cont = 0;
    for (int j = i+1; j < n; j++){
        if (vet[i] == vet[j]){
            printf("\nO vetor[%d] eh igual o vetor[%d]\n", i+1, j+1);
            cont++;
        }
        else break;
    }
    i++;
    if(i < n)
        return imprimeVetor(vet, n);
    else return cont;
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
    printf("\nTotal de %d repeticoes de elementos.\n",imprimeVetor(vet, n));
    free(vet);
}