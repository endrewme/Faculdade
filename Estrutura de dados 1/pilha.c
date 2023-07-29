#include <stdio.h>
#include <stdlib.h>

struct node{
    int valor;
    struct node *next;
};
typedef struct node Node;

void imprimir(Node *lista){  
    Node *listaAux = lista; 
    while(listaAux != NULL){
        printf("%d ", listaAux->valor); 
	listaAux = listaAux->next; 
    }
}

void removeTodos(Node *lista){
	while( lista != NULL){
		Node *next = lista->next;
		free(lista); 
		lista = next; 
	}
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
			Node *nextAux = lista->next;
		        free(lista); 
			return nextAux;
		    }
			else{ 
			anterior->next = lista->next;     
            free(lista);                 
			return inicio;
		    }
		}
        anterior = lista; 
        lista = lista->next;      
	    }
	}
}

Node* insereInicio(Node* lista, int valor){
    if(lista == NULL){
    	Node *node = (Node*) malloc(sizeof(Node));
		(*node).valor = valor;
		(*node).next = NULL; 
    	return node; 
    }
	else{
        Node *node = (Node*) malloc(sizeof(Node));
		(*node).valor = valor;
		(*node).next = lista; 
		return node;  
    }
}

Node* insereFinal(Node *lista, int valor){
    if(lista == NULL){
		Node *node = (Node*) malloc (sizeof(Node));
		node->valor = valor; 
		node->next = NULL;
		return node;
    }
	else{
	Node *listaAux = lista;    
        while(listaAux->next != NULL){
            listaAux = listaAux->next;
	}
	Node *node = (Node*) malloc(sizeof(Node));
	node->valor = valor;
	node->next = NULL;    
	listaAux->next = node;      
	return lista;
    } 
}

Node* pop (Node *pilha){
	Node* pilhaAux = pilha;
	while(pilhaAux->next->next != NULL){
		pilhaAux = pilhaAux->next;
	}
	free(pilhaAux->next);
	pilhaAux->next = NULL;
  return pilha;
}

Node* push (Node *pilha, int valor){
	Node *node = (Node*) malloc (sizeof(Node));
	node->valor = valor;
	node->next = NULL;
	if(pilha == NULL)
		pilha = node;
	else{
		Node* pilhaAux = pilha;
		while(pilhaAux->next != NULL)
			pilhaAux = pilhaAux->next;
		pilhaAux->next = node;
	}
	return pilha;
}

int main(){
    Node* pilha = NULL; 
    pilha = push(pilha, 10);
    pilha = push(pilha, 100);
    pilha = push(pilha, 5);
    pilha = pop(pilha);
    pilha = pop(pilha);
    pilha = push(pilha, 30);
    imprimir(pilha); 
}