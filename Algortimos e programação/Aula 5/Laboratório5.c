#include <stdio.h>
#include <stdlib.h>

int main(){
    system("color 3");
    //variaveis
    int num1=0,num2=0,divisor=2,verificador=1;
    //
    printf("\nDigite 2 numeros inteiros: ");
    scanf("%d %d",&num1,&num2);
    printf("\n");
    if(num1==1&&num2==2){
        printf("O %d eh o primeiro numero primo positivo\n",num1);
        printf("O %d eh o unico primo par\n",num2);
    }
    else {
        while(num1<num2) {
            //renovação das variais dentro do while
            divisor=2,verificador=1;
            if (num1 == 1) {
                printf("O %d eh o primeiro numero primo positivo\n", num1);
                num1++;
            }//final do if
            if (num1 == 2) {
                printf("O %d eh o unico primo par\n", num1);
                num1++;
            }//final do else if
            while (num1>divisor) {
                if ((num1 % divisor) == 0) {
                    verificador--;
                }//final if
            divisor++;
            }//final while
            if(verificador==1){
                printf("O %d eh primo",num1);
            }//final do if
        num1++;
        }//final while
    }//final else
    system("pause");
    return 0;
}//final main