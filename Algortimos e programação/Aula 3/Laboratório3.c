#include <stdio.h>

int main(){
    char caracter;
    fflush(stdin);    
    printf("Digite um caracter da tabela Ascii: ");
    scanf("%c",&caracter);
    
    if(caracter>=48&&caracter<=57){
        printf("\nEsse caracter eh um numero decimal");
    }
   else if(caracter>=65&&caracter<=90){
        printf("\nEsse caracter eh uma letra maiscula");
    }
    else if(caracter>=97&&caracter<=122){
        printf("\nEsse caracter eh uma letra minuscula");
    }
    else{
        printf("\nEsse caracter eh especial");
    }
    return(0);
}