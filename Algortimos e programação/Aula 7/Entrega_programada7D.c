#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    int num,tamanho;
    char camel[999];
    printf("Digite uma sequencia de palavras no estilo CamelCase:");
    gets(camel);
    for (int i=0;i<strlen(camel);i++) {
        if(isupper(camel[i]))
            num++;
    }
    printf("Esse CamelCase tem %d palavras.\n",num);
    system("pause");
    return 0;
}
