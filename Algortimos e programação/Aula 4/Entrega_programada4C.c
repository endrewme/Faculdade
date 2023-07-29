#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    system("color 6");
    fflush(stdin);
    //Variaveis
    char blocos;
    int predios, aparts;
    printf("\nBem-Vindo ao condominio Condo Minio\n\n");
    //Blocos
    printf("Digite um bloco de A a E: ");
    fflush(stdin);
    scanf("%c", &blocos);
    blocos=toupper(blocos);
    while (blocos<65||blocos>69){
        printf("\nBloco %c nao existente\n\nDigite uma letra valida: ",blocos);
        fflush(stdin);
        scanf("%c",&blocos);
        blocos=toupper(blocos);
    }
    //Predios
    printf("\nDigite um predio de 0 a 3: ");
    scanf("%d",&predios);
    while (predios<0||predios>3){
        printf("\nPredio %d nao existente\n\nDigite um numero valido: ",predios);
        scanf("%d",&predios);
    }
    //Apartamentos
    printf("\nDigite um apartamento entre:\t101\t102\t103\n\t\t\t\t201\t202\t203\n\t\t\t\t301\t302\t303\n: ");
    scanf("%d",&aparts);
    while(aparts!=101&&aparts!=102&&aparts!=103&&aparts!=201&&aparts!=202&&aparts!=203&&aparts!=301&&aparts!=302&&aparts!=303){
        printf("\nApartamento %d nao existente\n\nDigite um numero valido: ",aparts);
        scanf("%d",&aparts);
    }
    //Switch blocos
    switch (blocos) {
        case 'A':
            switch (predios) {
                case 0:
                    system("cls");\
                    printf("\n");
                    switch (aparts) {
                        case 101:printf("Bloco A, predio 0 apartamento 101: Paulo\n");
                            break;
                        case 102:printf("Bloco A, predio 0 apartamento 102: Paula\n");
                            break;
                        case 103:printf("Bloco A, predio 0 apartamento 103: Alexandra\n");
                            break;
                        case 201:printf("Bloco A, predio 0 apartamento 201: Antonia\n");
                            break;
                        case 202:printf("Bloco A, predio 0 apartamento 202: Bibiana\n");
                            break;
                        case 203:printf("Bloco A, predio 0 apartamento 203: Claudia\n");
                            break;
                        case 301:printf("Bloco A, predio 0 apartamento 301: Roberto\n");
                            break;
                        case 302:printf("Bloco A, predio 0 apartamento 302: indisponivel\n");
                            break;
                        case 303:printf("Bloco A, predio 0 apartamento 303: Luciana\n");
                            break;
                    }//Final switch aparts
                case 1:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 101:printf("Bloco A, predio 1 apartamento 101: Thiago\n");
                            break;
                        case 102:printf("Bloco A, predio 1 apartamento 102: Marcela\n");
                            break;
                        case 103:printf("Bloco A, predio 1 apartamento 103: Claudio\n");
                            break;
                        case 201:printf("Bloco A, predio 1 apartamento 201: Alyson\n");
                            break;
                        case 202:printf("Bloco A, predio 1 apartamento 202: Fernanda\n");
                            break;
                        case 203:printf("Bloco A, predio 1 apartamento 203: Maria\n");
                            break;
                        case 301:printf("Bloco A, predio 1 apartamento 301: Roberta\n");
                            break;
                        case 302:printf("Bloco A, predio 1 apartamento 302: Paulino\n");
                            break;
                        case 303:printf("Bloco A, predio 1 apartamento 303: Luciano\n");
                            break;
                    }//Final switch aparts
                    break;
                case 2:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 101:printf("Bloco A, predio 2 apartamento 101: João\n");
                            break;
                        case 102:printf("Bloco A, predio 2 apartamento 102: Marcelo\n");
                            break;
                        case 103:printf("Bloco A, predio 2 apartamento 103: Claudia\n");
                            break;
                        case 201:printf("Bloco A, predio 2 apartamento 201: Alyson\n");
                            break;
                        case 202:printf("Bloco A, predio 2 apartamento 202: Fernando\n");
                            break;
                        case 203:printf("Bloco A, predio 2 apartamento 203: Mariana\n");
                            break;
                        case 301:printf("Apartamento vago\n");
                            break;
                        case 302:printf("Bloco A, predio 2 apartamento 302: Michel\n");
                            break;
                        case 303:printf("Bloco A, predio 2 apartamento 303: Fábio\n");
                            break;
                    }//Final switch aparts
                    break;
                case 3:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 101:printf("Apartamento vago\n");
                            break;
                        case 103:printf("Apartamento vago\n");
                            break;
                        case 202:printf("Apartamento vago\n");
                            break;
                        case 301:printf("Apartamento vago\n");
                            break;
                        case 102:printf("Bloco A, predio 3 apartamento 102: Bianca\n");
                            break;
                        case 201:printf("Bloco A, predio 3 apartamento 201: Allyne\n");
                            break;
                        case 203:printf("Bloco A, predio 3 apartamento 203: Mario\n");
                            break;
                        case 302:printf("Bloco A, predio 3 apartamento 302: Mica \n");
                            break;
                        case 303:printf("Bloco A, predio 3 apartamento 303: Felipão\n");
                            break;
                        default:
                        system("cls");
                        printf("\nNao existe apartamento com esse numero: %d",aparts);
                    }//Final switch aparts
                    break;
            }//Final switch predios
            break;
        case 'B':
            switch (predios) {
                case 0:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco B, predio 0 apartamento 101: Olavo\n");
                            break;
                        case 102:printf("Bloco B, predio 0 apartamento 102: Eduarda\n");
                            break;
                        case 103:printf("Apartamento vago\n");
                            break;
                        case 201:printf("Bloco B, predio 0 apartamento 201: Rafael\n");
                            break;
                        case 202:printf("Bloco B, predio 0 apartamento 202: Diogo\n");
                            break;
                        case 203:printf("Bloco B, predio 0 apartamento 203: Mauricio\n");
                            break;
                        case 301:printf("Bloco B, predio 0 apartamento 301: Cristina\n");
                            break;
                        case 302:printf("Bloco B, predio 0 apartamento 302: Ruan\n");
                            break;
                        case 303:printf("Bloco B, predio 0 apartamento 303: Oscar");
                            break;
                    }//Final switch aparts
                    break;
                case 1:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco B, predio 0 apartamento 101: Bilac\n");
                            break;
                        case 102:printf("Bloco B, predio 1 apartamento 102: Eduardo\n");
                            break;
                        case 103:printf("Apartamento vago\n\n");
                            break;
                        case 201:printf("Bloco B, predio 1 apartamento 201: Rafaela\n");
                            break;
                        case 202:printf("Bloco B, predio 1 apartamento 202: Ricardo\n");
                            break;
                        case 203:printf("Bloco B, predio 1 apartamento 203: Divane\n");
                            break;
                        case 301:printf("Bloco B, predio 1 apartamento 301: Cristiane\n");
                            break;
                        case 302:printf("Bloco B, predio 1 apartamento 302: Jean\n");
                            break;
                        case 303:printf("Bloco B, predio 1 apartamento 303: Osmar\n");
                            break;
                    }//Final switch aparts
                    break;
                case 2:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco B, predio 0 apartamento 101: Mathias\n");
                            break;
                        case 102:printf("Apartamento vago\n");
                            break;
                        case 103:printf("Bloco B, predio 2 apartamento 103: Sther\n");
                            break;
                        case 201:printf("Bloco B, predio 2 apartamento 201: Cristina\n");
                            break;
                        case 202:printf("Bloco B, predio 2 apartamento 202: Estafania\n");
                            break;
                        case 203:printf("Bloco B, predio 2 apartamento 203: Fabio\n");
                            break;
                        case 301:printf("Bloco B, predio 2 apartamento 301: Luis\n");
                            break;
                        case 302:printf("Bloco B, predio 2 apartamento 302: Geanluca\n");
                            break;
                        case 303:printf("Bloco B, predio 2 apartamento 303: Jeronimo\n");
                            break;
                    }//Final switch aparts
                    break;
                case 3:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco B, predio 0 apartamento 101: Joana\n");
                            break;
                        case 102:printf("Apartamento vago\n");
                            break;
                        case 103:printf("Bloco B, predio 3 apartamento 103: Juliana\n");
                            break;
                        case 201:printf("Bloco B, predio 3 apartamento 201: Aldo\n");
                            break;
                        case 202:printf("Bloco B, predio 3 apartamento 202: Juliano\n");
                            break;
                        case 203:printf("Bloco B, predio 3 apartamento 203: Fabiana\n");
                            break;
                        case 301:printf("Bloco B, predio 3 apartamento 301: Luiza\n");
                            break;
                        case 302:printf("Bloco B, predio 3 apartamento 302: Nilse\n");
                            break;
                        case 303:printf("Bloco B, predio 3 apartamento 303: Geronimo\n");
                            break;
                    }//Final switch aparts
                    break;
            }//Final switch predios
            break;
        case 'C':
            switch (predios) {
                case 0:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 101:printf("Bloco C, predio 0 apartamento 101: Arthur\n");
                            break;
                        case 102:printf("Bloco C, predio 0 apartamento 102: Juh\n");
                            break;
                        case 103:printf("Bloco C, predio 0 apartamento 103: Bolivar\n");
                            break;
                        case 201:printf("Bloco C, predio 0 apartamento 201: Gustavo\n");
                            break;
                        case 202:printf("Bloco C, predio 0 apartamento 202: Uillian\n");
                            break;
                        case 203:printf("Bloco C, predio 0 apartamento 203: Fabinho\n");
                            break;
                        case 301:printf("Bloco C, predio 0 apartamento 301: Luizao\n");
                            break;
                        case 302:printf("Bloco C, predio 0 apartamento 302: Lucia\n");
                            break;
                        case 303:printf("Bloco C, predio 0 apartamento 303: Gianluca\n");
                            break;
                    }//Final switch aparts
                    break;
                case 1:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco C, predio 1 apartamento 101: Julio\n");
                            break;
                        case 102:printf("Bloco C, predio 1 apartamento 102: Aline\n");
                            break;
                        case 103:printf("Bloco C, predio 1 apartamento 103: Renato\n");
                            break;
                        case 201:printf("Bloco C, predio 1 apartamento 201: Thielo\n");
                            break;
                        case 202:printf("Bloco C, predio 1 apartamento 202: Mateus\n");
                            break;
                        case 203:printf("Bloco C, predio 1 apartamento 203: Zeca\n");
                            break;
                        case 301:printf("Apartamento vago\n");
                            break;
                        case 302:printf("Bloco C, predio 1 apartamento 302: Jean\n");
                            break;
                        case 303:printf("Bloco C, predio 1 apartamento 303: Osmar\n");
                            break;
                    }//Final switch aparts
                    break;
                case 2:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco C, predio 2 apartamento 101: Jessica\n");
                            break;
                        case 102:printf("Apartamento da Alison\n");
                            break;
                        case 103:printf("Bloco C, predio 2 apartamento 103: Renata\n");
                            break;
                        case 201:printf("Bloco C, predio 2 apartamento 201: Amanda\n");
                            break;
                        case 202:printf("Bloco C, predio 2 apartamento 202: Matheus\n");
                            break;
                        case 203:printf("Bloco C, predio 2 apartamento 203: Ueslei\n");
                            break;
                        case 301:printf("Apartamento vago\n");
                            break;
                        case 302:printf("Bloco C, predio 2 apartamento 302: Jeferson\n");
                            break;
                        case 303:printf("Bloco C, predio 2 apartamento 303: Jonathas\n");
                            break;
                    }//Final switch aparts
                    break;
                case 3:
                    system("cls");
                    printf("\n");
                    switch(aparts){
                        case 101:printf("Bloco C, predio 3 apartamento 101: Maria\n");
                            break;
                        case 102:printf("Bloco C, predio 3 apartamento 102: Alex\n");
                            break;
                        case 103:printf("Bloco C, predio 3 apartamento 103: Antonio\n");
                            break;
                        case 201:printf("Bloco C, predio 3 apartamento 201: Thiarles\n");
                            break;
                        case 202:printf("Bloco C, predio 3 apartamento 202: Daiana\n");
                            break;
                        case 203:printf("Bloco C, predio 3 apartamento 203: Jael\n");
                            break;
                        case 301:printf("Apartamento com problema\n");
                            break;
                        case 302:printf("Bloco C, predio 3 apartamento 302: Larissa\n");
                            break;
                        case 303:printf("Apartamento vago\n");
                            break;
                    }//Final switch aparts
                    break;
            }//Final switch predios
            break;
        case 'D':
            switch (predios) {
                case 0:
                    system("cls");
                    printf("\n");
                    switch (aparts){
                        case 101:printf("Apartamento em construcao\n");
                            break;
                        case 102:printf("Apartamento em construcao\n");
                            break;
                        case 103:printf("Apartamento em construcao\n");
                            break;
                        case 201:printf("Bloco D, predio 0 apartamento 201: Anderson\n");
                            break;
                        case 202:printf("Bloco D, predio 0 apartamento 202: Mario\n");
                            break;
                        case 203:printf("Bloco D, predio 0 apartamento 203: Crislaine\n");
                            break;
                        case 301:printf("Bloco D, predio 0 apartamento 301: Rafael\n");
                            break;
                        case 302:printf("Bloco D, predio 0 apartamento 302: Pele\n");
                            break;
                        case 303:printf("Bloco D, predio 0 apartamento 303: Caesar\n");
                            break;
                    }//Final switch aparts
                    break;
                case 1:
                    system("cls");
                    printf("\n");
                    switch (aparts){
                        case 101:printf("Apartamento em construcao\n");
                            break;
                        case 102:printf("Apartamento em construcao\n");
                            break;
                        case 103:printf("Apartamento em construcao\n");
                            break;
                        case 201:printf("Bloco D, predio 1 apartamento 201: Jeckson\n");
                            break;
                        case 202:printf("Bloco D, predio 1 apartamento 202: Marcio\n");
                            break;
                        case 203:printf("Bloco D, predio 1 apartamento 203: Cristaldo\n");
                            break;
                        case 301:printf("Bloco D, predio 1 apartamento 301: Renata\n");
                            break;
                        case 302:printf("Bloco D, predio 1 apartamento 302: Casemiro Caze\n");
                            break;
                        case 303:printf("Apartamento vago\n");
                            break;
                    }//Final switch aparts
                    break;
                case 2:
                    system("cls");
                    printf("\n");
                    switch (aparts){
                        case 101:printf("Apartamento em construcao\n");
                            break;
                        case 102:printf("Apartamento em construcao\n");
                            break;
                        case 103:printf("Apartamento em construcao\n");
                            break;
                        case 201:printf("Bloco D, predio 2 apartamento 201: Marcela\n");
                            break;
                        case 202:printf("Bloco D, predio 2 apartamento 202: Marcelita\n");
                            break;
                        case 203:printf("Bloco D, predio 2 apartamento 203: Cesar\n");
                            break;
                        case 301:printf("Apartamento vago\n");
                            break;
                        case 302:printf("Bloco D, predio 2 apartamento 302: Maicon\n");
                            break;
                        case 303:printf("Bloco D, predio 2 apartamento 303: Juan\n");
                            break;
                    }//Final switch aparts
                    break;
                case 3:
                    system("cls");
                    printf("\n");
                    switch (aparts){
                        case 101:printf("Apartamento em construcao\n");
                            break;
                        case 102:printf("Apartamento em construcao\n");
                            break;
                        case 103:printf("Apartamento em construcao\n");
                            break;
                        case 201:printf("Bloco D, predio 3 apartamento 201: Luigi\n");
                            break;
                        case 202:printf("Bloco D, predio 3 apartamento 202: Artur\n");
                            break;
                        case 203:printf("Apartamento vago\n");
                            break;
                        case 301:printf("Bloco D, predio 3 apartamento 301: Alister\n");
                            break;
                        case 302:printf("Bloco D, predio 3 apartamento 302: Bibiana\n");
                            break;
                        case 303:printf("Bloco D, predio 3 apartamento 303: Claudia\n");
                            break;
                    }//Final switch aparts
                    break;
                }//Final switch predios
            break;
        case 'E':
            switch (predios) {
                case 0:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 201:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 202:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 203:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 101:printf("Bloco E, predio 0 apartamento 101: Joaozinho\n");
                            break;
                        case 102:printf("Bloco E, predio 0 apartamento 102: Bibi\n");
                            break;
                        case 103:printf("Apartamento vago\n");
                            break;
                        case 301:printf("Bloco E, predio 0 apartamento 301: Gustavo\n");
                            break;
                        case 302:printf("Bloco E, predio 0 apartamento 302: Alessandro\n");
                            break;
                        case 303:printf("Apartamento vago\n");
                            break;
                        default:
                        system("cls");
                        printf("\nNao existe apartamento com esse numero: %d\n", aparts);
                    }
                break;
                case 1:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 201:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 202:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 203:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 101:printf("Bloco E, predio 1 apartamento 101: Paulo\n");
                            break;
                        case 102:printf("Bloco E, predio 1 apartamento 102: Ronaldo\n");
                            break;
                        case 103:printf("Apartamento vago\n");
                            break;
                        case 301:printf("Apartamento vago\n");
                            break;
                        case 302:printf("Bloco E, predio 1 apartamento 302: Alessandra\n");
                            break;
                        case 303:printf("Bloco E, predio 1 apartamento 303: Thielo\n");
                            break;
                        default:
                            system("cls");
                            printf("\nNao existe apartamento com esse numero: %d\n", aparts);
                    }
                break;
                case 2:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 201:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 202:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 203:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 101:printf("Bloco E, predio 2 apartamento 101: Carlise\n");
                            break;
                        case 102:printf("Bloco E, predio 2 apartamento 102: Quelen\n");
                            break;
                        case 103:printf("Apartamento vago\n");
                            break;
                        case 301:printf("Bloco E, predio 2 apartamento 301: Mauricio\n");
                            break;
                        case 302:printf("Bloco E, predio 2 apartamento 302: Cristina\n");
                            break;
                        case 303:printf("Apartamento interditado\n");
                            break;
                    }
                break;
                case 3:
                    system("cls");
                    printf("\n");
                    switch (aparts) {
                        case 201:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 202:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 203:printf("Apartamento indisponivel para locacao\n");
                            break;
                        case 103:printf("Apartamento vago\n");
                            break;
                        case 302:printf("Apartamento vago\n");
                            break;
                        case 101:printf("Bloco E, predio 3 apartamento 101: Claudio\n");
                            break;
                        case 102:printf("Bloco E, predio 3 apartamento 102: Ketlen\n");
                            break;
                        case 301:printf("Bloco E, predio 3 apartamento 301: Edson\n");
                            break;
                        case 303:printf("Apartamento interditado\n");
                            break;
                    }
                break;
            }//Final switch predios
    }//Final switch blocos
    printf("\n");
    system("pause");
    return 0;
}//Final da main