#include <stdio.h>

void numeros(int vets[9]){
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&vets[i]);
    }
}
void mostrar(int vets[9]){
    for (int i = 0; i < 10; ++i) {
        printf(" %d ",vets[i]);
    }
}
void soma(int somavet[9]){
    int acumul;
    for (int i = 0; i < 10; ++i) {
        acumul+=somavet[i];
    }
    printf("%d",acumul);
}
int main() {
    int vet1[9],vet2[9];
    float vet3[9],acumul;
    char sinal;
    printf("Digite 10 numeros para o primeiro vetor:\n");
    numeros(vet1);
    printf("\nAgora digite mais 10 valores para o segundo vetor:\n");
    numeros(vet2);
    printf("\nEscolha um dos sinais para executar sua operacao [+,-,*,/]:");
    fflush(stdin);
    scanf("%c",&sinal);
    while (sinal!='+'&&sinal!='-'&&sinal!='*'&&sinal!='/'){
        printf("Digite um sinal valido [+,-,*,/]:");
        fflush(stdin);
        scanf("%c",&sinal);
    }
    for (int  i= 0; i < 10 ; ++i) {
        if (sinal=='+')vet3[i]=vet1[i]+vet2[i];
        else if (sinal=='-')vet3[i]=vet1[i]-vet2[i];
        else if (sinal=='*')vet3[i]=vet1[i]*vet2[i];
        else if (sinal=='/')vet3[i]=vet1[i]/vet2[i];
    }
    system("cls");
    printf("Todos os 10 valores do Vetor 1:\n");
    mostrar(vet1);
    printf("\nTodos os 10 valores do Vetor 2:\n");
    mostrar(vet2);
    printf("\nTodos os 10 valores do Vetor 3:\n");
    for (int i = 0; i < 10; ++i) {
        printf(" %.2f ",vet3[i]);
    }
    printf("\nA Soma de todos os 10 valores do Vetor 1 eh:\n");
    soma(vet1);
    printf("\nA Soma de todos os 10 valores do Vetor 2 eh:\n");
    soma(vet2);
    printf("\nA Soma de todos os 10 valores do Vetor 3 eh:\n");
    for (int i = 0; i < 10; ++i) {
        acumul+=vet3[i];
    }
    printf("%.2f\n",acumul);
    system("pause");
    return 0;
}
