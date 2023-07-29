#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    system("color 6");
    fflush(stdin);
    //Variaveis
    char blocos;
    int predios = 0, aparts = 0;
    //
    printf("Bem-Vindo ao condominio Condo Minio\n\n");
    printf("Digite um bloco: ");
    scanf("%c", &blocos);
    blocos=toupper(blocos);
    printf("\nDigite um predio: ");
    scanf("%d",&predios);
    printf("\nDigite um apartamento: ");
    scanf("%d",&aparts);
    switch (blocos) {
        case 'A':
            if(predios==0){
                system("cls");
                printf("Bloco A\n\nPredio 0\n\n");
                if(aparts==101)printf("Bloco A, predio 0 apartamento 101: Paulo");
                else if(aparts==102)printf("Bloco A, predio 0 apartamento 102: Paula");
                else if(aparts==103)printf("Bloco A, predio 0 apartamento 103: Alexandra");
                else if(aparts==201)printf("Bloco A, predio 0 apartamento 201: Antonia");
                else if(aparts==202)printf("Bloco A, predio 0 apartamento 202: Bibiana");
                else if(aparts==203)printf("Bloco A, predio 0 apartamento 203: Claudia");
                else if(aparts==301)printf("Bloco A, predio 0 apartamento 301: Roberto");
                else if(aparts==302)printf("Bloco A, predio 0 apartamento 302: indisponivel");
                else if(aparts==303)printf("Bloco A, predio 0 apartamento 303: Luciana");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==1){
                system("cls");
                printf("Bloco A\n\nPredio 1\n\n");
                if(aparts==101)printf("Bloco A, predio 1 apartamento 101: Thiago");
                else if(aparts==102)printf("Bloco A, predio 1 apartamento 102: Marcela");
                else if(aparts==103)printf("Bloco A, predio 1 apartamento 103: Claudio");
                else if(aparts==201)printf("Bloco A, predio 1 apartamento 201: Alyson");
                else if(aparts==202)printf("Bloco A, predio 1 apartamento 202: Fernanda");
                else if(aparts==203)printf("Bloco A, predio 1 apartamento 203: Maria");
                else if(aparts==301)printf("Bloco A, predio 1 apartamento 301: Roberta");
                else if(aparts==302)printf("Bloco A, predio 1 apartamento 302: Paulino");
                else if(aparts==303)printf("Bloco A, predio 1 apartamento 303: Luciano");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==2){
                system("cls");
                printf("Bloco A\n\nPredio 2\n\n");
                if(aparts==101)printf("Bloco A, predio 2 apartamento 101: João");
                else if(aparts==102)printf("Bloco A, predio 2 apartamento 102: Marcelo");
                else if(aparts==103)printf("Bloco A, predio 2 apartamento 103: Claudia");
                else if(aparts==201)printf("Bloco A, predio 2 apartamento 201: Alyson");
                else if(aparts==202)printf("Bloco A, predio 2 apartamento 202: Fernando");
                else if(aparts==203)printf("Bloco A, predio 2 apartamento 203: Mariana");
                else if(aparts==301)printf("Apartamento vago");
                else if(aparts==302)printf("Bloco A, predio 2 apartamento 302: Michel");
                else if(aparts==303)printf("Bloco A, predio 2 apartamento 303: Fábio");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==3){
                system("cls");
                printf("Bloco A\n\nPredio 3\n\n");
                if((aparts==101)||(aparts==103)||(aparts==202)||(aparts==301))printf("Apartamento vago");
                else if(aparts==102)printf("Bloco A, predio 3 apartamento 102: Bianca");
                else if(aparts==201)printf("Bloco A, predio 3 apartamento 201: Allyne");
                else if(aparts==203)printf("Bloco A, predio 3 apartamento 203: Mario");
                else if(aparts==302)printf("Bloco A, predio 3 apartamento 302: Mica ");
                else if(aparts==303)printf("Bloco A, predio 3 apartamento 303: Felipão");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else {
                system("cls");
                printf("\nEsse predio nao existe: %d\n",predios);
            }
            break;
        case 'B':
            if(predios==0){
                system("cls");
                printf("Bloco B\n\nPredio 0\n\n");
                if(aparts==101)printf("Bloco B, predio 0 apartamento 101: Olavo");
                else if(aparts==102)printf("Bloco B, predio 0 apartamento 102: Eduarda");
                else if(aparts==103)printf("Apartamento vago");
                else if(aparts==201)printf("Bloco B, predio 0 apartamento 201: Rafael");
                else if(aparts==202)printf("Bloco B, predio 0 apartamento 202: Diogo");
                else if(aparts==203)printf("Bloco B, predio 0 apartamento 203: Mauricio");
                else if(aparts==301)printf("Bloco B, predio 0 apartamento 301: Cristina");
                else if(aparts==302)printf("Bloco B, predio 0 apartamento 302: Ruan");
                else if(aparts==303)printf("Bloco B, predio 0 apartamento 303: Oscar");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==1){
                system("cls");
                printf("Bloco B\n\nPredio 1\n\n");
                if(aparts==101)printf("Bloco B, predio 0 apartamento 101: Bilac");
                else if(aparts==102)printf("Bloco B, predio 1 apartamento 102: Eduardo");
                else if(aparts==103)printf("Apartamento vago");
                else if(aparts==201)printf("Bloco B, predio 1 apartamento 201: Rafaela");
                else if(aparts==202)printf("Bloco B, predio 1 apartamento 202: Ricardo");
                else if(aparts==203)printf("Bloco B, predio 1 apartamento 203: Divane");
                else if(aparts==301)printf("Bloco B, predio 1 apartamento 301: Cristiane");
                else if(aparts==302)printf("Bloco B, predio 1 apartamento 302: Jean");
                else if(aparts==303)printf("Bloco B, predio 1 apartamento 303: Osmar");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==2){
                system("cls");
                printf("Bloco B\n\nPredio 2\n\n");
                if(aparts==101)printf("Bloco B, predio 0 apartamento 101: Mathias");
                else if(aparts==102)printf("Apartamento vago");
                else if(aparts==103)printf("Bloco B, predio 2 apartamento 103: Sther");
                else if(aparts==201)printf("Bloco B, predio 2 apartamento 201: Cristina");
                else if(aparts==202)printf("Bloco B, predio 2 apartamento 202: Estafania");
                else if(aparts==203)printf("Bloco B, predio 2 apartamento 203: Fabio");
                else if(aparts==301)printf("Bloco B, predio 2 apartamento 301: Luis");
                else if(aparts==302)printf("Bloco B, predio 2 apartamento 302: Geanluca");
                else if(aparts==303)printf("Bloco B, predio 2 apartamento 303: Jeronimo");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==3) {
                system("cls");
                printf("Bloco B\n\nPredio 3\n\n");
                if (aparts == 101)printf("Bloco B, predio 0 apartamento 101: Joana");
                else if (aparts == 102)printf("Apartamento vago");
                else if (aparts == 103)printf("Bloco B, predio 3 apartamento 103: Juliana");
                else if (aparts == 201)printf("Bloco B, predio 3 apartamento 201: Aldo");
                else if (aparts == 202)printf("Bloco B, predio 3 apartamento 202: Juliano");
                else if (aparts == 203)printf("Bloco B, predio 3 apartamento 203: Fabiana");
                else if (aparts == 301)printf("Bloco B, predio 3 apartamento 301: Luiza");
                else if (aparts == 302)printf("Bloco B, predio 3 apartamento 302: Nilse");
                else if (aparts == 303)printf("Bloco B, predio 3 apartamento 303: Geronimo");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else {
                system("cls");
                printf("\nEsse predio nao existe: %d\n", predios);
            }
            break;
        case 'C':
            if(predios==0){
                system("cls");
                printf("Bloco C\n\nPredio 0\n\n");
                if(aparts==101)printf("Bloco C, predio 0 apartamento 101: Arthur");
                else if(aparts==102)printf("Bloco C, predio 0 apartamento 102: Juh");
                else if(aparts==103)printf("Bloco C, predio 0 apartamento 103: Bolivar");
                else if(aparts==201)printf("Bloco C, predio 0 apartamento 201: Gustavo");
                else if(aparts==202)printf("Bloco C, predio 0 apartamento 202: Uillian");
                else if(aparts==203)printf("Bloco C, predio 0 apartamento 203: Fabinho");
                else if(aparts==301)printf("Bloco C, predio 0 apartamento 301: Luizao");
                else if(aparts==302)printf("Bloco C, predio 0 apartamento 302: Lucia");
                else if(aparts==303)printf("Bloco C, predio 0 apartamento 303: Gianluca");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==1){
                system("cls");
                printf("Bloco C\n\nPredio 1\n\n");
                if(aparts==101)printf("Bloco C, predio 1 apartamento 101: Julio");
                else if(aparts==102)printf("Bloco C, predio 1 apartamento 102: Aline");
                else if(aparts==103)printf("Bloco C, predio 1 apartamento 103: Renato");
                else if(aparts==201)printf("Bloco C, predio 1 apartamento 201: Thielo");
                else if(aparts==202)printf("Bloco C, predio 1 apartamento 202: Mateus");
                else if(aparts==203)printf("Bloco C, predio 1 apartamento 203: Zeca");
                else if(aparts==301)printf("Apartamento vago");
                else if(aparts==302)printf("Bloco C, predio 1 apartamento 302: Jean");
                else if(aparts==303)printf("Bloco C, predio 1 apartamento 303: Osmar");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==2){
                system("cls");
                printf("Bloco C\n\nPredio 2\n\n");
                if(aparts==101)printf("Bloco C, predio 2 apartamento 101: Jessica");
                else if(aparts==102)printf("Apartamento da Alison");
                else if(aparts==103)printf("Bloco C, predio 2 apartamento 103: Renata");
                else if(aparts==201)printf("Bloco C, predio 2 apartamento 201: Amanda");
                else if(aparts==202)printf("Bloco C, predio 2 apartamento 202: Matheus");
                else if(aparts==203)printf("Bloco C, predio 2 apartamento 203: Ueslei");
                else if(aparts==301)printf("Apartamento vago");
                else if(aparts==302)printf("Bloco C, predio 2 apartamento 302: Jeferson");
                else if(aparts==303)printf("Bloco C, predio 2 apartamento 303: Jonathas");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==3) {
                system("cls");
                printf("Bloco C\n\nPredio 3\n\n");
                if (aparts == 101)printf("Bloco C, predio 3 apartamento 101: Maria");
                else if (aparts == 102)printf("Bloco C, predio 3 apartamento 102: Alex");
                else if (aparts == 103)printf("Bloco C, predio 3 apartamento 103: Antonio");
                else if (aparts == 201)printf("Bloco C, predio 3 apartamento 201: Thiarles");
                else if (aparts == 202)printf("Bloco C, predio 3 apartamento 202: Daiana");
                else if (aparts == 203)printf("Bloco C, predio 3 apartamento 203: Jael");
                else if (aparts == 301)printf("Apartamento com problema");
                else if (aparts == 302)printf("Bloco C, predio 3 apartamento 302: Larissa");
                else if (aparts == 303)printf("Apartamento vago");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else {
                system("cls");
                printf("\nEsse predio nao existe: %d\n", predios);
            }
            break;
        case 'D':
            if(predios==0){
                system("cls");
                printf("Bloco D\n\nPredio 0\n\n");
                if((aparts==101)||(aparts==102)||(aparts==103))printf("Apartamento em construcao");
                else if(aparts==201)printf("Bloco D, predio 0 apartamento 201: Anderson");
                else if(aparts==202)printf("Bloco D, predio 0 apartamento 202: Mario");
                else if(aparts==203)printf("Bloco D, predio 0 apartamento 203: Crislaine");
                else if(aparts==301)printf("Bloco D, predio 0 apartamento 301: Rafael");
                else if(aparts==302)printf("Bloco D, predio 0 apartamento 302: Pele");
                else if(aparts==303)printf("Bloco D, predio 0 apartamento 303: Caesar");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==1){
                system("cls");
                printf("Bloco D\n\nPredio 1\n\n");
                if((aparts==101)||(aparts==102)||(aparts==103))printf("Apartamento em construcao");
                else if(aparts==201)printf("Bloco D, predio 1 apartamento 201: Jeckson");
                else if(aparts==202)printf("Bloco D, predio 1 apartamento 202: Marcio");
                else if(aparts==203)printf("Bloco D, predio 1 apartamento 203: Cristaldo");
                else if(aparts==301)printf("Bloco D, predio 1 apartamento 301: Renata");
                else if(aparts==302)printf("Bloco D, predio 1 apartamento 302: Casemiro Caze");
                else if(aparts==303)printf("Apartamento vago");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==2){
                system("cls");
                printf("Bloco D\n\nPredio 2\n\n");
                if((aparts==101)||(aparts==102)||(aparts==103))printf("Apartamento em construcao");
                else if(aparts==201)printf("Bloco D, predio 2 apartamento 201: Marcela");
                else if(aparts==202)printf("Bloco D, predio 2 apartamento 202: Marcelita");
                else if(aparts==203)printf("Bloco D, predio 2 apartamento 203: Cesar");
                else if(aparts==301)printf("Apartamento vago");
                else if(aparts==302)printf("Bloco D, predio 2 apartamento 302: Maicon");
                else if(aparts==303)printf("Bloco D, predio 2 apartamento 303: Juan");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==3) {
                system("cls");
                printf("Bloco D\n\nPredio 3\n\n");
                if((aparts==101)||(aparts==102)||(aparts==103))printf("Apartamento em construcao");
                else if (aparts == 201)printf("Bloco D, predio 3 apartamento 201: Luigi");
                else if (aparts == 202)printf("Bloco D, predio 3 apartamento 202: Artur");
                else if (aparts == 203)printf("Apartamento vago");
                else if (aparts == 301)printf("Bloco D, predio 3 apartamento 301: Alister");
                else if (aparts == 302)printf("Bloco D, predio 3 apartamento 302: Bibiana");
                else if (aparts == 303)printf("Bloco D, predio 3 apartamento 303: Claudia");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else {
                system("cls");
                printf("\nEsse predio nao existe: %d\n", predios);
            }
            break;
        case 'E':
            if(predios==0) {
                system("cls");
                printf("Bloco E\n\nPredio 0\n\n");
                if ((aparts == 201) || (aparts == 202) || (aparts == 203))printf("Apartamento indisponivel para locacao");
                else if (aparts == 101)printf("Bloco E, predio 0 apartamento 101: Joaozinho");
                else if (aparts == 102)printf("Bloco E, predio 0 apartamento 102: Bibi");
                else if (aparts == 103)printf("Apartamento vago");
                else if (aparts == 301)printf("Bloco E, predio 0 apartamento 301: Gustavo");
                else if (aparts == 302)printf("Bloco E, predio 0 apartamento 302: Alessandro");
                else if (aparts == 303)printf("Apartamento vago");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d", aparts);
                }
                printf("\n");
            }
            else if(predios==1) {
                system("cls");
                printf("Bloco E\n\nPredio 1\n\n");
                if ((aparts == 201) || (aparts == 202) || (aparts == 203))printf("Apartamento indisponivel para locacao");
                else if (aparts == 101)printf("Bloco E, predio 1 apartamento 101: Paulo");
                else if (aparts == 102)printf("Bloco E, predio 1 apartamento 102: Ronaldo");
                else if (aparts == 103)printf("Apartamento vago");
                else if (aparts == 301)printf("Apartamento vago");
                else if (aparts == 302)printf("Bloco E, predio 1 apartamento 302: Alessandra");
                else if (aparts == 303)printf("Bloco E, predio 1 apartamento 303: Thielo");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d", aparts);
                }
                printf("\n");
            }
            else if(predios==2){
                system("cls");
                printf("Bloco E\n\nPredio 2\n\n");
                if((aparts==201)||(aparts==202)||(aparts==203))printf("Apartamento indisponivel para locacao");
                else if(aparts==101)printf("Bloco E, predio 2 apartamento 101: Carlise");
                else if(aparts==102)printf("Bloco E, predio 2 apartamento 102: Quelen");
                else if(aparts==103)printf("Apartamento vago");
                else if(aparts==301)printf("Bloco E, predio 2 apartamento 301: Mauricio");
                else if(aparts==302)printf("Bloco E, predio 2 apartamento 302: Cristina");
                else if(aparts==303)printf("Apartamento interditado");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else if(predios==3) {
                system("cls");
                printf("Bloco E\n\nPredio 3\n\n");
                if((aparts==201)||(aparts==202)||(aparts==203))printf("Apartamento indisponivel para locacao");
                else if ((aparts == 103)||(aparts == 302))printf("Apartamento vago");
                else if (aparts == 101)printf("Bloco E, predio 3 apartamento 101: Claudio");
                else if (aparts == 102)printf("Bloco E, predio 3 apartamento 102: Ketlen");
                else if (aparts == 301)printf("Bloco E, predio 3 apartamento 301: Edson");
                else if (aparts == 303)printf("Apartamento interditado");
                else {
                    system("cls");
                    printf("\nNao existe apartamento com esse numero: %d",aparts);
                }
                printf("\n");
            }
            else {
                system("cls");
                printf("\nEsse predio nao existe: %d\n", predios);
            }
            break;
        default:
            system("cls");
            printf("Bloco %c nao existente\n", blocos);
    }//Final do switch
    printf("\n");
    system("pause");
    return 0;
}//Final da main