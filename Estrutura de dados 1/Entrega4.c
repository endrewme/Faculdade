#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct voo{
    int numeroDoVoo;
    int dataDoVoo;
    int horarioDoVoo;
    int minutoDoVoo;
    char aeroportoDeSaida;
    char aeroportoDeChegada;
    int rota;
    int tempoEstimadoDoVoo;
    int passageirosABordo;
};
struct passagem{
    int numeroDaPassagem;
    int numeroDoVoo;
    int dataDeEmbarque;
    int horarioDeEmbarque;
    int minutoDeEmbarque;
    int portaoDeEmbarque;
};
typedef struct voo Alegrete;
void cadastrarVoo();
void consultaVoo();
void cadastrarPassagem();
void consultaPassagem();
int main();
