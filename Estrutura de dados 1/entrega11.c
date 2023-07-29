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
void removeTodos(Node *lista){

	while( lista != NULL){
		Node *proximo = lista->proximo;
		free(lista); 
		lista = proximo; 
	}
    printf("\nLista liberada com sucesso :D\n");
}	
Node* removeElement(Node *lista, int valor){

	if(lista == NULL){
	    return lista;
	}
    else{
        Node *inicio = lista;
	    Node *anterior = NULL;
	    while(lista != NULL){
            if(lista->valor == valor){
                if(anterior == NULL){

                Node *proximoAux = lista->proximo;
                    free(lista); 
                return proximoAux;
                }
                else{   
                anterior->proximo = lista->proximo;     
                            free(lista);                 
                return inicio;
                }
            }
            anterior = lista; 
            lista = lista->proximo;  
	    }
	}
}

int main(){
    Node* minhaLista = NULL;
    minhaLista = insereFinal(minhaLista, 15);
    minhaLista = insereFinal(minhaLista, 100);
    minhaLista = insereFinal(minhaLista, 5);
    minhaLista = insereInicio(minhaLista, 12345);
    minhaLista = insereInicio(minhaLista, 321);
    imprimir(minhaLista);
    minhaLista = removeElement(minhaLista, 1000);
    minhaLista = removeElement(minhaLista, 100);
    imprimir(minhaLista);
    removeTodos(minhaLista);
}