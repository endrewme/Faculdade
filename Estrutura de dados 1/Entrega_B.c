#include<stdio.h>
#include<stdlib.h>

int meuTroco(int *notas, int n, int valor){
    if(valor == 0) 
        return 1;
    if(valor < 0) 
        return 0;
    int soma = 0;
    for(int i = 0; i < n; i++)
        soma += meuTroco(notas, n, valor - notas[i]);
    return soma;
}

int main(){
    int n = 3, valor = 0;
    int* notas = (int*) malloc (sizeof(int) * n);
    notas[0] = 5;
    notas[1] = 10;
    notas[2] = 50;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("Possibilidades de troco: %d", meuTroco(notas, n, valor));
    free(notas);
}