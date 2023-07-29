#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tamanho 20
struct voo{
    int numeroDoVoo;
    char dataDoVoo[tamanho];
    float horarioDoVoo;
    char aeroportoDeSaida[tamanho];
    char aeroportoDeChegada[tamanho];
    int rota;
    char tempoEstimadoDoVoo[tamanho];
    int passageirosABordo;
};
typedef struct voo alegretevoo;
alegretevoo* aloca_estrutura(int n)
{
    alegretevoo* ptdados_passagem = (alegretevoo*)malloc(sizeof(alegretevoo) *n);
    if (ptdados_passagem != NULL)
        return ptdados_passagem;
    else
        return NULL;
}
void cadastrarVoo(alegretevoo* voo){
    static int i = 0;
    int j = 0;
    while (1){
        printf("Digite o numero do voo:");
        scanf("%d", &voo[i].numeroDoVoo);
        printf("Digite a data do voo");
        fgets(voo[i].dataDoVoo, tamanho, stdin);
        getchar();
        printf("Digite o horario do voo:");
        scanf("%f", &voo[i].horarioDoVoo);
        printf("Digite o aeroporto de saida:");
        fgets(voo[i].aeroportoDeSaida, tamanho, stdin);
        getchar();
        printf("Digite o aeroporto de chegada:");
        fgets(voo[i].aeroportoDeChegada, tamanho, stdin);
        getchar();
        printf("Digite o numero da rota:");
        scanf("%d", &voo[i].rota);
        printf("Digite o tempo estimada:");
        fgets(voo[i].tempoEstimadoDoVoo, tamanho, stdin);
        printf("Digite o numero de passageiros");
        scanf("%d", &voo[i].passageirosABordo);
        i++;
        printf("Se deseja fechar a aplicacao digite 1:");
        scanf("%d", &j);
        system("cls");
        if (j == 1)break;
    }
}
void consultaVoo(alegretevoo* voo){
    int verif;
    printf("Insira o numero do voo que gostaria de verificar:");
    scanf("%d", &verif);
    for (int i = 0; i <= verif; i++){
        if (voo[i].numeroDoVoo == verif){
            printf("Numero do voo: %d\n",voo[i].numeroDoVoo);
            printf("Data do voo: %s\n",voo[i].dataDoVoo);
            printf("Horario do voo: %.2f\n",voo[i].horarioDoVoo);
            printf("Aeroporto de saida: %s\n",voo[i].aeroportoDeSaida);
            printf("Aeroporto de chegada: %s\n",voo[i].aeroportoDeChegada);
            printf("Numero da rota: %d\n",voo[i].rota);
            printf("Tempo estimada: %s\n",voo[i].tempoEstimadoDoVoo);
            printf("Numero de passageiros: %d\n",voo[i].passageirosABordo);
            printf("\n\nAperte qualquer tecla para sair");
            getch();
            break;
        }
    }
};
int main(){
    int n=200;
    int opcao=0;
    system("cls");
    alegretevoo* alegretevoo = aloca_estrutura(n);
    while (1){
        printf("\nSelecione uma opcao:\n");
        printf(" 1 - Cadastrar voo \n 2 - Consultar voo \n 3 - Sair\n\n:");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            system("cls");
            cadastrarVoo(alegretevoo);
            break;
        case 2:
            system("cls");
            consultaVoo(alegretevoo);
            break;
        case 3:
            return 0;
        default:
            system("cls");
            printf("valor invalido");
            break;
        }
        system("cls");
    }
};
