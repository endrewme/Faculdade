#include<stdio.h>
#include<stdlib.h>
void fract(float num, int* inteiro, float* frac){
    *inteiro = (int)num;
    *frac = num - (*inteiro);
}
int main(){
    int* inteiro;
    float num = 0.0;
    float* frac;
    inteiro = (int*)malloc(sizeof(int));
    frac = (float*)malloc(sizeof(float));
    printf("Digite um numero real para entrar como parametro:");
    scanf("%f",&num);

    fract(num,inteiro,frac);
    
    printf("Sua entrada eh: %.5f\n"
        "A parte inteiro eh: %d\n"
        "A parte fracionaria eh: %.5f\n",num,(*inteiro),(*frac));
    free(inteiro);
    free(frac);
    return 0;
}