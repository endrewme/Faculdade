#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num[999],num2[999],numword[1],comparador=0;
    char word[999];
    printf("Digite uma palavra engracada:");
    fflush(stdin);
    gets(word);
    numword[0]=strlen(word);
    numword[1]=strlen(word);
    for (int i=1;i<=strlen(word)-1;i++) {
        num[i]=word[i]-word[i-1];
        printf("%d\n ",num[i]);
        num2[i]=word[numword[0]-1]-word[numword[0]-2];
        numword[0]--;
        printf("%d\n",num2[i]);
    }
    for (int i=0;i<strlen(word);i++) {
        if(num[i]==num2[i])
            comparador++;
    }
    comparador==numword[1]-1?printf("Essa palavra eh engracada\n"):printf("Essa palavra nao eh engracada\n");
    system("pause");
    return 0;
}