#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
    int chave=0;
    char word[999],cifra[999];
    printf("Digite uma chave para a Cifra de Cesar:");
    scanf("%d",&chave);
    printf("Digite uma frase para ser criptografada:");
    fflush(stdin);
    gets(word);
    printf("A chave eh: %d\n",chave);
    for (int i=0;i<strlen(word);i++) {
        cifra[i]=word[i]+chave;
        switch (isupper(word[i])) {
            case 1:
                if(word[i]==' ')
                    cifra[i]=' ';
                else if((word[i]+chave)<65)
                    cifra[i]+=26;
                else if((word[i]+chave)>90)
                    cifra[i]-=26;
                break;
            case 0:
                if(word[i]==' ')
                    cifra[i]=' ';
                else if((word[i]+chave)<97)
                    cifra[i]+=26;
                else if((word[i]+chave)>122)
                    cifra[i]-=26;
                break;
        }
    }
    printf("A frase: %s criptografada fica:\n%s\n",word,cifra);
    system("pause");
    return 0;
}
