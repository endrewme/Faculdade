#include <stdio.h>
#include <stdlib.h>

struct Node{
    int dates;
    struct Node *next;
}   

*first = NULL;

int add(struct Node *listaInc){
    int soma = 0;
    while (listaInc != NULL){
        soma += listaInc->dates;
        listaInc = listaInc->next;
    }
    return soma;
}

void criar(int lista[], int n){
    int i;
    struct Node *aux, *last;
    first = (struct Node *) malloc (sizeof (struct Node));
    first->dates = lista[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++){
        aux = (struct Node *) malloc (sizeof (struct Node));
        aux->dates = lista[i];
        aux->next = NULL;
        last->next = aux;
        last = aux;
    }
}

void main(){
    srand(time(NULL));
    int lista[5];
    for (int i = 0; i <= 4; i++)
        lista[i] = rand() % 10;
    criar (lista, 5);
    printf ("Somatorio da lista encadeada dos valores %d, %d, %d, %d, %d eh %d\n", lista[0], lista[1], lista[2],lista[3] ,lista[4], add (first));
}