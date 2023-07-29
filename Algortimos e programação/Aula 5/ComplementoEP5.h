#ifndef AMIGOS_C_AMIGO_DO_AMIGO_H
#define AMIGOS_C_AMIGO_DO_AMIGO_H

//função para dividir e separar os divisores das variaveis num1 e num2
int divisao(int valor){
    //variaveis dentro da divisao
    int acumulador=0,divisor=1;
    //laço de repetição
    while(divisor<valor){
        if((valor%divisor)==0) {
            printf(" %d ",divisor);
            acumulador+=divisor;
        }
        divisor++;
    }
    printf("\n");
    return acumulador;
}
    //função para imprimir dados
int tela(int numero,int acumul){
    //in e out de dados
    printf("\nDivisores de %d sao:\n\n",numero);
    acumul=divisao(numero);
    printf("\nSoma dos divisores de %d eh:  %d\n",numero,acumul);
    return acumul;
}
    //função para reiniciar as função main
int reset(){
    //variavel dentro do reset
    int confirmacao;
    //in e out de dados
    printf("Quer tentar novamente?\n\nPara sim tecle 1, para nao aperta qualquer tecla: ");
    scanf("%d",&confirmacao);
    printf("\n");
    return confirmacao;
}
#endif //AMIGOS_C_AMIGO_DO_AMIGO_H