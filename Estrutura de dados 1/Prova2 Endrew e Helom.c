#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMANHO 128

//Trabalho do Endrew e do Helom

struct filaRequisicoes{
    int id; // identificação do usuário;
    struct filaRequisicoes *proximo;
};
typedef struct filaRequisicoes frequest;

struct perfil{
    int id; // identificação do usuário;
    char *nome;
    char *cidade;
    int idade;
};
typedef struct perfil Perfil;

// lista de usuários
struct user{
    struct perfil *perfilDoUsuario;          // informações do usuario
    struct user *listaDeAmigos;              // lista de amigos já confirmados
    struct filaRequisicoes *amigosPendentes; // fila de amigos ainda não confirmados
    struct user *proximoUser;                // ponteiro para o próximo usuario da lista
};
typedef struct user User;

Perfil *AlocaPerfil(){
    Perfil *newPerfil = (Perfil *)malloc(sizeof(Perfil *));
    newPerfil->nome = (char *)malloc(sizeof(char) * TAMANHO);   // aloca o nome ao novo perfil
    newPerfil->cidade = (char *)malloc(sizeof(char) * TAMANHO); // aloca a cidade ao novo perfil
    return newPerfil;
    // o id e a idade nao foram alocados, por que eles NAO SAO PONTEIROS!
}

User *AlocaUser(User *listaUser){
    listaUser = (User *)malloc(sizeof(User));
    listaUser->perfilDoUsuario = AlocaPerfil();
    return listaUser;
}

User *DesalocaPerfil(Perfil *newPerfil){ // funçao para desalocar o Perfil
    free(newPerfil);
    free(newPerfil->nome);
    free(newPerfil->cidade);
}

Perfil DesalocaUser(User *listaUser){ // funçao para desalocar o Usuario
    User *tmp;
    while (listaUser != NULL){
        tmp = listaUser;
        listaUser = listaUser->proximoUser;
        free(tmp);
    }
    
} 

User *criarUsuario(User *listaUser, int id){ // funçao para criar o usuario

    User *Usuario = AlocaUser(listaUser);

    fflush(stdin);
    getchar();
    printf("Nome:");
    fgets((Usuario->perfilDoUsuario)->nome, TAMANHO, stdin); // adiciona um nome ao usuario
    
    printf("Cidade:");
    fgets((Usuario->perfilDoUsuario)->cidade, TAMANHO, stdin); // adiciona uma cidade ao usuario
    
    printf("Idade:");
    scanf("%d", &(Usuario->perfilDoUsuario)->idade); // adiciona uma idade ao usuario
    
    Usuario->perfilDoUsuario->id = id; // iguala o id do perfil ao id parametro

    if (listaUser == NULL) // manda o Usuario para a lista encadeada
        listaUser = Usuario;
    else{
        User *listaAux = listaUser;

        while (listaAux->proximoUser != NULL)
            listaAux = listaAux->proximoUser;

        listaAux->proximoUser = Usuario;
    }
    return listaUser;
}

User *buscaPorId(User *listaUser, int buscaId){
    User *listaAux = listaUser; // cria uma lista auxiliar

    while (listaAux != NULL){
        if (listaAux->perfilDoUsuario->id == buscaId){
            User *userPorId = listaAux;
            userPorId->proximoUser = NULL; // impossibilita de retornar proximoUser;
            return userPorId;
        }
        listaAux = listaAux->proximoUser;
    }
    printf("\n Id nao existente na lista de usuarios");
    return NULL;
}

User *buscaPorNome(User *listaUser, char *nome){
    User *listaAux = listaUser;
    int comparador;

    while (listaAux != NULL){
        if (strncmp(listaAux->perfilDoUsuario->nome, nome, 128) == 0){ //strncmp para compara duas strings
            return listaAux;
        }
        listaAux = listaAux->proximoUser;
    }
    printf("\nNao existe um usuario com esse nome");
    return NULL;
}

int removerPorId(User *listaUser, int id){
    if (listaUser == NULL){
        printf("Nao existe usuario com esse id");
        return 0;
    }
    else{
        User *listaAux = listaUser;
        User *anterior = NULL;

        while (listaAux != NULL){ // a funçao removerPorId libera a memoria do Usuario que for removido
            if (listaAux->perfilDoUsuario->id == id){
                if (anterior == NULL){
                    User *proximoAux = listaAux->proximoUser;
                    free(listaAux->perfilDoUsuario->nome);
                    free(listaAux->perfilDoUsuario->idade);
                    free(listaAux->perfilDoUsuario);
                    free(listaAux);
                    return 1; // se ele conseguir remover ele retorna 1
                }
                else{
                    anterior->proximoUser = listaAux->proximoUser;
                    free(listaAux->perfilDoUsuario->nome);
                    free(listaAux->perfilDoUsuario->idade);
                    free(listaAux->perfilDoUsuario);
                    free(listaAux);
                    return 1; // se ele conseguir remover ele retorna 1
                }
            }
            anterior = listaAux;
            listaAux = listaAux->proximoUser;
        }
    }
    return 0; // se nao retorna 0
}

int removerPorNome(User *listaUser, char *nome){ 
    User *listaAux = listaUser;

    while (listaAux != NULL){
        if (strncmp(listaAux->perfilDoUsuario->nome, nome, 128) == 0){
            removerPorId(listaUser, listaAux->perfilDoUsuario->id); // a funçao removerPorNome usa a outra funçao de remover para tal
            return 1;
        }
    }
    return 0;
}

void printaLista(User *listaUser){ // funçao teste para printar as informaçoes
    User *listaAux = listaUser;

    while (listaAux != NULL){
        printf("%s\n", listaAux->perfilDoUsuario->nome);
        printf("%s\n", listaAux->perfilDoUsuario->cidade);
        printf("%d\n", listaAux->perfilDoUsuario->idade);
        printf("\n\n");
    }
}

void solicitarAmizade(User *listaUser, int idPerfilSolicitante, int idPerfilAmigo){
    User *amigo = buscaPorId(listaUser, idPerfilAmigo);
    frequest *guardafila = amigo->amigosPendentes;

    if (amigo->amigosPendentes == NULL){ //se a fila estiver vazia add um como primeiro
        frequest *fila = (frequest *)malloc(sizeof(frequest));
        fila->id = idPerfilSolicitante;
        fila->proximo = NULL;
    }
    else{
        frequest *fila = (frequest *)malloc(sizeof(frequest));// se a fila ja estiver ocupada add para depois
        fila->id = idPerfilSolicitante;
        amigo->amigosPendentes = fila;
        fila->proximo = guardafila;
    }
}

void aceitarTodasSolicitacaoAmizade(User *listaUser, int idPerfil){
    User *usuario = buscaPorId(listaUser, idPerfil);
    frequest *guardafila = usuario->amigosPendentes;
    
    while (usuario->amigosPendentes!= NULL)
        aceitarPrimeiraSolicitacaoAmizade(listaUser,usuario->perfilDoUsuario->id);
}

void aceitarPrimeiraSolicitacaoAmizade(User *listaUser, int idPerfil){
    User *usuario = buscaPorId(listaUser, idPerfil);
    
    if (usuario->amigosPendentes != NULL){
        frequest *guardafila = usuario->amigosPendentes;
        frequest *proximoAux = usuario->amigosPendentes->proximo;
        usuario->listaDeAmigos = guardafila->id;
        free(usuario->amigosPendentes);
        usuario->amigosPendentes = proximoAux;
    }
}

void rejeitarTodasSolicitacaoAmizade(User *listaUser, int idPerfil){
    User *usuario = buscaPorId(listaUser, idPerfil);

    while (usuario->amigosPendentes!= NULL) // enquanto a lista estiver ocupada ele cicla a funçao de rejeitar o primeiro até ficar vazia
        rejeitarPrimeiraSolicitacaoAmizade(listaUser,usuario->perfilDoUsuario->id);
}

void rejeitarPrimeiraSolicitacaoAmizade(User *listaUser, int idPerfil){
    User *usuario = buscaPorId(listaUser, idPerfil);

    if (usuario->amigosPendentes != NULL){ // se a lista de amigosPendentes estiver ocupado ele libera o primeiro
        frequest *proximoAux = usuario->amigosPendentes->proximo;
        free(usuario->amigosPendentes);
        usuario->amigosPendentes = proximoAux;
    }
}

int numAmigos(User *listaUser, int idPerfil){ // funçao para contagem de amigos
    User *usuario = buscaPorId(listaUser, idPerfil);
    User *listaAux = usuario->listaDeAmigos;
    int numAmgs = 0;

    while (listaAux == NULL){
        numAmgs++;
        listaAux = listaAux->listaDeAmigos;
    }
    return numAmgs;
}

int numUsers(User *listaUser){ // funçao para contar o numero de usuarios com uma variavel que conta quantos usuarios tem
    User *listaAux = listaUser;
    int numUser = 0;

    while (listaAux == NULL){
        numUser++;
        listaAux = listaAux->proximoUser;
    }
    return numUser;
}

int numSolicitacoesAmigos(User *listaUser, int idPerfil){ // funçao para contar o numero de solicitaçoes de amizade igual a funçao a cima
    User *usuario = buscaPorId(listaUser, idPerfil);
    frequest *filaAux = usuario->amigosPendentes;
    int numSoli = 0;

    while (filaAux != NULL){
        numSoli++;
        filaAux = filaAux->proximo;
    }
    return numSoli;
}

User *quemEhOPerfilMaisAmigo(User *listaUser){

}

User *recomendarAmizade(int idPerfil, User *listaUser){

}

int main(){
    int menu = 100, id = 0, idAmg = 0;
    char nome[TAMANHO];
    User *listaUser = AlocaUser;

    while (menu != 0){
        printf("Oque deseja fazer?\n");
        // printf("1 - criar perfil\n2 - procurar user por id\n3 - procurar user por nome\n");
        scanf("%d", &menu);
        switch (menu){
        case 1:
            id++;
            listaUser = criarUsuario(listaUser, id);
        case 2:
            printaLista(listaUser);
        case 3:
            printf("Insira o id que deseja buscar: ");
            scanf("%d", &id);
            buscaPorId(listaUser, id);
        case 4:
            fflush(stdin);
            getchar();
            printf("Insira o nome que deseja buscar: ");
            fgets(nome, TAMANHO, stdin);
            buscaPorNome(listaUser, nome);
        case 5:
            printf("Insira o id que deseja remover: ");
            scanf("%d", &id);
            removerPorId(listaUser, id);
        case 6:
            printf("Digite o nome que deseja remover: ");
            fgets(nome, TAMANHO, stdin);
            removerPorNome(listaUser, nome);
        case 7:
            printf("Digite o seu id e o id que deseja adicionar: ");
            scanf("%d %d", id, idAmg);
            solicitarAmizade(listaUser, id, idAmg);
        case 8:
            printf("Digite o seu id: ");
            scanf("%d", id);
            aceitarPrimeiraSolicitacaoAmizade(listaUser, id);
        case 9:
            printf("Digite o seu id: ");
            scanf("%d", id);
            aceitarTodasSolicitacaoAmizade(listaUser, id);
        case 10:
            printf("Digite o seu id: ");
            scanf("%d", id);
            rejeitarPrimeiraSolicitacaoAmizade(listaUser, id);
        case 11:
            printf("Digite o seu id: ");
            scanf("%d", id);
            rejeitarTodasSolicitacaoAmizade(listaUser, id);
        case 12:
            printf("Digite o seu id: ");
            scanf("%d", id);
            printf("O numero de amigos que voce possui eh %d", numAmigos(listaUser, id));
        case 13:
            printf("Digite o seu id: ");
            scanf("%d", id);
            printf("O numero de solicitaçoes que voce possui eh %d", numSolicitacoesAmigos(listaUser, id));
        case 14:
            printf("O numero de usuarios na rede eh %d", numUsers);
        case 0:
            break;
        }
    }
    DesalocaPerfil(listaUser);
    DesalocaUser(listaUser);
    return 0;
}