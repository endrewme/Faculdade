#include <stdio.h>
#include <stdlib.h>

int** alocaTab(int size){
    int **tab;
    tab = (int**) malloc(sizeof(int*) * size);
    
    srand(time(NULL));

    for (int x = 0; x < size; x++){
        tab[x] = (int*) malloc(sizeof(int) * size);
        for (int y = 0; y < size; y++)
            tab[x][y] = rand() % 10;
    }
    return tab;
}

void freeTab(int **tab, int size){
    for (int i = 0; i < size; i++)
        free(tab[i]);
    free(tab);
    printf("\nMemoria desalocada com sucesso! :D\n");
}

int minimo(int a, int b, int c){
	if( a <= b && a <= c) return a;
	if( b <= a && b <= c) return b;
	else return c;
}

int maximo(int a, int b, int c){
	if( a >= b && a >= c) return a;
	if( b >= a && b >= c) return b;
	else return c;
}

int minGramaCavalo(int **tab, int x, int y){

    if(x > 0 && y > 0)
	    return tab[x][y] 
		+  minimo( minGramaCavalo( tab, x - 1, y),
	        minGramaCavalo( tab, x, y - 1),
                minGramaCavalo( tab, x - 1, y - 1));
    if (x == 0 && y > 0)
        return tab[x][y] + minGramaCavalo(tab, x, y - 1);
    if (x > 0 && y == 0)
        return tab[x][y] + minGramaCavalo(tab, x - 1, y);
    if(x == 0 && y == 0) 
        return tab[x][y];
}

int maxGramaCavalo(int **tab, int x, int y){

    if(x > 0 && y > 0)
	    return tab[x][y] 
		+  maximo( maxGramaCavalo( tab, x - 1, y),
	        maxGramaCavalo( tab, x, y - 1),
                maxGramaCavalo( tab, x - 1, y - 1));
    if (x == 0 && y > 0)
        return tab[x][y] 
        + maxGramaCavalo(tab, x, y - 1);
    if (x > 0 && y == 0)
        return tab[x][y] 
        + maxGramaCavalo(tab, x - 1, y);
    if (x == 0 && y == 0)
        return tab[x][y];
}

void print(int **tab){
    for (int x = 0; x < 4; x++){
        printf("\n");
        for (int y = 0; y < 4; y++){
            printf(" [%d]\t", tab[x][y]);
        }
    }
}

int main(){

    int **tab;
    int size = 4;

    tab = alocaTab(size);
    tab[0][0] = 0;
    print(tab);
            
    printf("\n\nO minimo de grama eh: %d", minGramaCavalo(tab, size - 1, size - 1));     
    printf("\nO maximo de grama eh: %d\n", maxGramaCavalo(tab, size - 1, size - 1));

    freeTab(tab, size);
    return 0;
}