#include<stdio.h>
#include<stdlib.h>

struct node{
    int valor;
    struct node *proximo;
};
typedef struct node Node;

void imprimir(Node *lista){

    Node *listaAux = lista;

    while (listaAux != NULL){
        printf("%d\n", listaAux->valor);
        listaAux = listaAux->proximo;
    }
}

Node* insereFinal(Node* lista, int valor){

    Node *listaAx = lista;

    if (lista == NULL){
        Node *node = (Node*) malloc (sizeof(Node));
        (*node).valor = valor;
        (*node).proximo = NULL;
        return node;
    }

    else{
        while (listaAx->proximo != NULL){
            listaAx = listaAx->proximo;
        }
    }
    Node *node = (Node*) malloc (sizeof(Node));
    node->valor = valor;
    node->proximo = NULL;

    listaAx->proximo = node;

    return lista;
}

Node* insereInicio(Node* lista, int valor){

    if (lista == NULL){
        Node *node = (Node*) malloc (sizeof(Node));
        (*node).valor = valor;
        (*node).proximo = NULL;
        return node;
    }

    else{
        Node *node = (Node*) malloc (sizeof(Node));
        (*node).valor = valor;
        (*node).proximo = lista;
        return node;
    } 
    
}

int main(){
    Node* minhaLista = NULL;
    minhaLista = insereFinal(minhaLista, 10);
    minhaLista = insereFinal(minhaLista, 100);
    minhaLista = insereFinal(minhaLista, 5);

    /*for (int i = 0; i < 100; i++)
        minhaLista = insereInicio(minhaLista, rand()%1000);*/

    minhaLista = insereInicio(minhaLista, 1000);

    imprimir(minhaLista);

}