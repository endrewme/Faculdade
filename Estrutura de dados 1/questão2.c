#include<stdio.h>
#include<stdlib.h>

struct disciplina{
    int *codigo;
    char *nome;
};
typedef struct disciplina Disciplina;

struct aluno{
    int *matricula;
    char *nome;
    Disciplina *listaDisciplinas;
    int numeroDeDisciplinas;
};
typedef struct aluno Aluno;

Aluno* alocaAluno(int n){
    Aluno* Estudante = (int*)malloc(sizeof(int)*n);
    Estudante -> matricula = (int*)malloc(sizeof(int)*n);
    Estudante -> nome = (char*)malloc(sizeof(int)*n);
    Estudante -> numeroDeDisciplinas = (int*)malloc(sizeof(int)*n);
    if (Estudante != NULL) return Estudante;
    else return NULL;
}
Disciplina *alocaDisciplina(int n){
    Disciplina* listaDisciplina = (int*)malloc(sizeof(int)*n);
    listaDisciplina -> codigo = (int*)malloc(sizeof(int)*n);
    listaDisciplina -> nome = (char*)malloc(sizeof(int)*n);
    if (listaDisciplina != NULL) return listaDisciplina;
    else return NULL;
}

void insereAluno(int n, Aluno *Estudante){
    for(int j; j < n; j++){
        int d = 0;
        printf("Insira a matricula do Aluno:");
        scanf("%d", &*(Estudante[j]).matricula);
        printf("Insira o nome do Aluno:");
        fgets(Estudante[j]->nome, stdin);
        printf("Insira quantas disciplinas o aluno vai cursar:");
        scanf("%d", &d);
        for(int i; i < d; i++){
            printf("Insira o codigo da primeira disciplina:");
            scanf("%d", &*(Estudante[j]).listaDisciplinas[i]->codigo);
            printf("Insira o nome da disciplina:");
            fgets(*(Estudante[j]).listaDisciplinas[i]->nome, stdin);
        }
    }
}

void imprimir(Aluno *Estudante, int n, int *d){
    for(int i; i < n; i++){
        printf("Matricula do aluno %d: %d", i+1, *(Estudante[i]).matricula);
        printf("Nome do aluno %d: %s", i+1, *(Estudante[i]).nome);
        for(int j; j < d; j++){
            printf("Total de materias matriculadas: %d", d);
            printf("Codigo da disciplina %d: %d", j+1, *(Estudante[i]).listaDisciplinas[j]->codigo);
            printf("Disciplina %d: %s", j+1, *(Estudante[i]).listaDisciplinas[j]->nome);
        }
    }
}

int main(){
    int n = 0;
    int *d = (int*)malloc(sizeof(int));
    printf("Quantos alunos deseja cadastrar?: ");
    scanf("%d", &n);
    insereAluno(n, d);
}
