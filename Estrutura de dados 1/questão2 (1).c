#include<stdio.h>
#include<stdlib.h>
#define tamanho 128

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

Disciplina *alocaDisciplina(int n){
    Disciplina* listaDisciplina = (Disciplina*) malloc(sizeof(Disciplina) * n);
    for(int i = 0; i < n; i++){
        listaDisciplina[i].codigo = (int*) malloc (sizeof(int) * 1 );
	listaDisciplina[i].nome = (char*) malloc (sizeof(char) * 1000); 
    }

    return listaDisciplina;
}

Aluno* alocaAluno(int n){
    Aluno* alumino = (Aluno*)malloc(sizeof(Aluno) * n);
    for(int i = 0; i < n ; i++){
        alumino[i].matricula = (int*) malloc (sizeof(int));
	alumino[i].nome = (char*) malloc (sizeof(char));
        alumino[i].listaDisciplinas = alocaDisciplina(10);
    }
    return alumino;
}

void insereAluno(int n, Aluno *alumino){
    for(int i = 0; i < n; i++){
        printf("\nInsira a matricula do Aluno: ");
        scanf("%d", &alumino[i].matricula);
        printf("Insira o nome do Aluno: ");
        getchar();
        fgets(alumino[i].nome, tamanho, stdin);
        printf("Insira quantas disciplinas o aluno vai cursar: ");
        scanf("%d", &alumino[i].numeroDeDisciplinas);
        for(int j = 0; j < alumino[i].numeroDeDisciplinas; j++){
            printf("\nInsira o codigo da disciplina: ");
            scanf("%d", &alumino[i].listaDisciplinas[j].codigo);
            printf("Insira o nome da disciplina: ");
            getchar();
            fgets(alumino[i].listaDisciplinas[j].nome, tamanho, stdin);
        }
    }
    printf("\n------------------------------");
}

void imprimir(Aluno *alumino, int n){
    for(int i = 0; i < n; i++){
        printf("\n\n\tMatricula %d: %d\n\n", i+1, alumino[i].matricula);
        printf("Aluno %d: %s\n", i+1, alumino[i].nome);
        printf("Total de materias matriculadas: %d\n", alumino[i].numeroDeDisciplinas);
        printf("\n----- Disciplinas -----\n");
        for(int j = 0; j < alumino[i].numeroDeDisciplinas; j++){
            printf("\nDisciplina %d: %s", j+1, alumino[i].listaDisciplinas[j].nome);
            printf("Codigo da disciplina %d: %d\n", j+1, alumino[i].listaDisciplinas[j].codigo);
        }
        printf("\n------------------------------");
    }
}

void imprimirRec(Aluno *alumino, int n){
     if(n == 1){
        printf("\nAluno %d matricula: %d", n, alumino[n-1].matricula);
    } 
    else{
        printf("\nAluno %d matricula: %d", n, alumino[n-1].matricula);
        imprimirRec(alumino,(n-1));
    }
}

void liberaMemoria(Aluno *alumino, int n){
    for(int i = 0; i < n; i++){
        free(alumino[i].matricula);
        free(alumino[i].nome);
        free(alumino[i].numeroDeDisciplinas);
        for (int j = 0; j < 10; j++){
            free(alumino[i].listaDisciplinas[j].nome);
            free(alumino[i].listaDisciplinas[j].codigo);
        }
    }
    printf("Memoria liberada com sucesso!");
}

int main(){
    int n = 0;
    printf("Quantos alunos deseja cadastrar?: ");
    scanf("%d", &n);
    Aluno* alumino = alocaAluno(n);
    insereAluno(n, alumino);
    imprimir(alumino, n);
    printf("\n\n-----Funcao recursiva-----");
    imprimirRec(alumino ,n);
}
