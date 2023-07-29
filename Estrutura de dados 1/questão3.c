#include<stdio.h>
#include<stdlib.h>

void converte(int n){
    static int i = 0;
    int b[128];
    if (n != 1 || n != 0){
        b[i] = n % 2;
        return converte(n);
    }
    else
        printf("A traducao para binario eh: ");
        for (int j; j < i; j++){
            printf(" %d ",b[j]);
        }
}
int main(){
    int n = 0;
    printf("Insira um valor decimal: ");
    scanf("%d", &n);
    converte(n);
}
