#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tamanho 20
int vaga=1;

struct passagem{
    int numeroDaPassagem;
    int numeroDoVoo;
    char dataDeEmbarque[tamanho];
    float horarioDeEmbarque;
    int portaoDeEmbarque;
};
typedef struct passagem alegretepass;
alegretepass* aloca_estrutura(int n)
{
    alegretepass* ptdados_passagem = (alegretepass*)malloc(sizeof(alegretepass) *n);
    if (ptdados_passagem != NULL)
        return ptdados_passagem;
    else
        return NULL;
}
void cadastrarPassagem(alegretepass* pass){
    static int i = 0;
    int j = 0;
    while (1){
        if (vaga == 0){
            system("cls");
            printf("\n\t\tPassagens esgotadas");
            getch();
            break;
        }
        printf("Digite o numero da passagem:");
        scanf("%d", &pass[i].numeroDaPassagem);
        printf("Digite o numero do voo:");
        scanf("%d", &pass[i].numeroDoVoo);
        printf("Digite a data de embarque:");
        fgets(pass[i].dataDeEmbarque, tamanho, stdin);
        getchar();
        printf("Digite o horario de embarque:");
        scanf("%d", &pass[i].horarioDeEmbarque);
        printf("Digite o portao de embarque:");
        scanf("%d", &pass[i].portaoDeEmbarque);
        i++;
        vaga--;
        printf("Se deseja fechar a aplicacao digite 1:");
        scanf("%d", &j);
        system("cls");
        if (j == 1)break;
    }
}
void consultaPassagem(alegretepass* pass){
    int verif;
    printf("Insira o numero do voo que gostaria de verificar:");
    scanf("%d", &verif);
    for (int i = 0; i <= verif; i++){
        if (pass[i].numeroDaPassagem == verif){
            printf("Numero da passagem: %d\n",pass[i].numeroDaPassagem);
            printf("Numero do voo: %d\n",pass[i].numeroDoVoo);
            printf("Data de embarque: %s\n",pass[i].dataDeEmbarque);
            printf("Horario do embarque: %.2f\n",pass[i].horarioDeEmbarque);
            printf("Numero do portao de embarque: %d\n",pass[i].portaoDeEmbarque);
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
    alegretepass* alegretepass = aloca_estrutura(n);
    while (1){
        printf("\nSelecione uma opcao:\n");
        printf(" 1 - Cadastrar passagem \n 2 - Consultar passagem \n 3 - Sair\n\n:");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            system("cls");
            cadastrarPassagem(alegretepass);
            break;
        case 2:
            system("cls");
            consultaPassagem(alegretepass);
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
}
