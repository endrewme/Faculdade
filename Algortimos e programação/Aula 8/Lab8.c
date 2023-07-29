#include<stdio.h>

void main(){
    int n,i,j;
    printf("Digite um tamanho para a matriz: ");
    scanf("%d",&n);
    printf("\n");
    int matriz[n][n],maior[n];

    for(i=0;i<n;i++)
        maior[i]=-9999;

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            printf("Digite um valor da posição da matriz %d%d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

        for(j=0;j<n;j++){
            for(i=0;i<n;i++){
                if(matriz[i][j]>maior[j]) maior[j]=matriz[i][j];
            }
        }

        printf("\n\nEssa matriz eh %d%d:\n",n,n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf(" %d ",matriz[i][j]);
            }
        }
        for(j=0;j<n;j++){
            printf("\n O maior valor de cada coluna eh %d \n",maior[j]);
            }


}
