#include<stdio.h>
#include<stdlib.h>

void converte(int dec){
    int n;
    if( dec/2 != 0){
        n = dec/2;
        converte(n);
        printf(" %d ", dec%2);
    }
    else printf(" %d ", dec%2);
}
int main(){
    int dec = 0;
    printf("Insira um valor decimal: ");
    scanf("%d", &dec);
    printf("\nResultado: ");
    converte(dec);
    printf("\n");
}