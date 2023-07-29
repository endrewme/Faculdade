#include <stdio.h>
#include <stdlib.h>
#include "amigo_do_amigo.h"

//É necessario ter o arquivo amigo_do_amigo.h na mesma pasta que este arquivo
int main(){
    //variaveis da main
    int num1=0,num2=0,acumu1=0,acumu2=0;
    //in e out de dados da main
    printf("Digite 2 numeros positivos: ");
    scanf("%d %d",&num1,&num2);
    //enquanto num1 ou num2 ser menor que 1
    while(num1<1||num2<1){
        printf("\nSoh eh permitido numeros positivos, digite novamente: ");
        scanf("%d %d",&num1,&num2);
    }
    system("clear");
    //uso das funções do amigo_do_amigo.h
    acumu1= tela(num1,acumu1);
    acumu2= tela(num2,acumu2);
    //enquanto não sejam amigos
    while((acumu1!=num2)||(acumu2!=num1)) {
            printf("\nEsses 2 numeros %d e %d nao sao amigos\n\n", num1, num2);
            printf("Digite 2 numeros novamente: ");
            scanf("%d %d",&num1,&num2);
            system("clear");
            acumu1= tela(num1,acumu1);
            acumu2= tela(num2,acumu2);
    }
    //caso acumuladores sejam iguais
    if((acumu1==num2)&&(acumu2==num1)) {
        printf("\nEsses 2 numeros %d e %d sao amigos\n\n", num1, num2);
        //se reset for igual a 1 chama a main denovo
        if(reset()==1) {
            system("clear");
            return main();
        }
        //se não encerra
        else{
            return 0;
        }
    }
}