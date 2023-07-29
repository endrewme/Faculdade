#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAMANHO 128

struct Matricula{

   char nome[TAMANHO];
   char sobrenome[TAMANHO];
   int idade;
   int matricula;
   char curso[TAMANHO];
   char endereço[TAMANHO];
};
typedef struct Matricula Registro;
Registro* alocaEstrutura(int n){
    Registro* meusRegistros = (Registro*) malloc (sizeof(Registro) * n);
    if(meusRegistros != NULL) return meusRegistros;
    else return NULL;
}
void preencherEstrutura(Registro *estrutura, int n){
    for(int i = 0; i < n; i++){
       printf("Matricula do aluno %d\n\n", i+1);
       printf("Digite o Nome do aluno %d: ", i+1);
       fgets(estrutura[i].nome, TAMANHO, stdin);
       printf("Digite o Sobrenome do aluno %d: ", i+1);
       fgets(estrutura[i].sobrenome, TAMANHO, stdin);
       printf("Digite a idade do aluno %d: ", i+1);
       scanf("%d",&estrutura[i].idade);
       getchar();
       scanf("%d",&estrutura[i].matricula);
       getchar();
       printf("Digite o Curso de Graduacao do aluno %d: ", i+1);
       fgets(estrutura[i].curso, TAMANHO, stdin);
       printf("Digite o Endereo do aluno %d: ", i+1);
       fgets(estrutura[i].endereço, TAMANHO, stdin);
    }
}
char* nomeDoAlunoMaisVelho(Registro* estrutura, int n){
    int maior = -1;
    int indiceMaior = -1;
    for(int i = 0; i < n; i++){
        if(estrutura[i].idade  > maior){
           maior = estrutura[i].idade;
           indiceMaior = i;
       }
    }
    if (indiceMaior != -1) return estrutura[indiceMaior].nome;
    else return -1;
}
float mediaDeIdadedosAlunos (Registro* estrutura, int n){
   int soma = 0;
   for(int i = 0; i < n; i++){
       soma += estrutura[i].idade;
   }
  return (float)soma/(float)n;
}
int main(){
  int num = 5;
  Registro* meusRegistros = alocaEstrutura(num);
  preencherEstrutura(meusRegistros,num);
  printf("%s\n", nomeDoAlunoMaisVelho(meusRegistros, num));
  printf("%f\n", mediaDeIdadedosAlunos(meusRegistros, num));
}