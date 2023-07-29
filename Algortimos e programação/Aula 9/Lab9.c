#include <stdio.h>
float valor1,valor2,result=0;
int opcao;
char sinal;
float mais(){
    printf("\nDigite dois valores para somar eles:");
    scanf("%f%f",&valor1,&valor2);
    result=valor1+valor2;
}
float menos(){
    printf("\nDigite dois valores para diminuir eles:");
    scanf("%f%f",&valor1,&valor2);
    result=valor1-valor2;
}
float x(){
    printf("\nDigite dois valores para multiplicar eles:");
    scanf("%f%f",&valor1,&valor2);
    result=valor1*valor2;
}
float dividi(){
    printf("\nDigite dois valores para dividir o primeiro pelo segundo:");
    scanf("%f%f",&valor1,&valor2);
    result=valor1/valor2;
}
float exponencia(){
    printf("\nDigite dos valores para somar eles:");
    scanf("%f%f",&valor1,&valor2);
    result=pow(valor1,valor2);
}
int menu(){
    printf("Bem vindo a calculadora primitiva :D\n\n"
    "Menu:\n"
    "1 - Adicao\n"
    "2 - Subtracao\n"
    "3 - Multiplicacao\n"
    "4 - Divisao\n"
    "5 - Potenciacao\n"
    "6 - Sair\n"
    "Digite uma opcao:");
}
void main() {
    menu();
    opcao=getch();
    switch(opcao) {
        case '1':
            mais();
            break;
        case '2':
            menos();
            break;
        case '3':
            x();
            break;
        case '4':
            dividi();
            break;
        case '5':
            exponencia();
            break;
        case '6':
            printf("\n\n\tTchau!\n");
            break;    
        }
    if (opcao>'0'&&opcao<'6'){
        printf("Seu resultado eh: %.2f",result);
    }
}    