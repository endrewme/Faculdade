#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    system("color 4");
    char letra;
    printf("\nDigita uma letra: ");
    fflush(stdin);
    scanf("%c",&letra);
    printf("\n");
    letra=toupper(letra);
    while (letra<65||letra>90){
        printf("Valor invalido\nDigite uma letra: ");
        fflush(stdin);
        scanf("%c",&letra);
        letra=toupper(letra);
        printf("\n");
    }
    switch(letra){
        case 'A':
            printf("Essa letra %c eh uma vogal\n",letra);
            break;
        case 'E':
            printf("Essa letra %c eh uma vogal\n",letra);
            break;
        case 'I':
            printf("Essa letra %c eh uma vogal\n",letra);
            break;
        case 'O':
            printf("Essa letra %c eh uma vogal\n",letra);
            break;
        case 'U':
            printf("Essa letra %c eh uma vogal\n",letra);
            break;
        default:
            printf("Essa letra %c eh uma consoante\n",letra);
    }//final do switch
    printf("\n");
    system("pause");
    return 0;
}//final da main
