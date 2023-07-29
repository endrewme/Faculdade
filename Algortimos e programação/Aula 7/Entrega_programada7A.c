#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    int numdeword1,numdeword2,palin;
    char word[999];
    printf("Digite um palidromo:");
    fflush(stdin);
    gets(word);
    for(int i=0;word[i];i++)
        word[i]=tolower(word[i]);
    numdeword1=strlen(word);
    numdeword2=strlen(word);
    printf(" %d\n\n",numdeword1);
    for(int i=0;i<=strlen(word);i++){
        if(word[i]==' ')
            i++,palin++;
        if(word[numdeword1-1]==' ')
            numdeword1--;
        if(word[i]==word[numdeword1-1])
            palin++;
        printf(" %c:%d | %c:%d\n",word[i],i,word[numdeword1-1],numdeword1);
        numdeword1--;
    }
    palin--;
    printf(" %d %d \n",numdeword2,palin);
    numdeword2==palin?printf("Eh um palindromo\n"):printf("No eh um palindromo\n");
    system("pause");
    return 0;
}
