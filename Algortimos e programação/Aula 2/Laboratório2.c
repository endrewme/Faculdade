#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("color 5");
    //declaração de variáveis
    float raioDoCirculo=2.5, pi=3.14, área;
    //cálculo
    área= pi* pow(raioDoCirculo,2);
    //apresentação
    printf("\nA area do circulo eh igual a: %.3f\n\n",área);
    //entrada de dados novos dados
    system("color ");
    printf("Se quiser alterar o valor do raio e ver a sua area pode digitar aqui:");
    scanf("%f",&raioDoCirculo);
    área= pi* pow(raioDoCirculo,2);
    //saida de dados novos
    printf("\nArea do circulo de %.0f eh igual a: %.3f\n",raioDoCirculo,área);
    //Endrew :D
    system("pause");
    return 0;
}