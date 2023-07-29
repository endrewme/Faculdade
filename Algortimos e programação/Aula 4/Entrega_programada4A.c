#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n1menor, n2menor, n3menor;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &n1,&n2,&n3);
    printf("\n");
    n1menor=n1<n2 && n1<n3;
    n2menor=n2<n1 && n2<n3;
    n3menor=n3<n1 && n3<n2;
    switch (n1menor) {
        case 1:
            printf("O numero %d eh menor que o numero %d e o numero %d",n1,n2,n3);
            break;
        case 0:
            switch (n2menor) {
                case 1:
                    printf("O numero %d eh menor que o numero %d e o numero %d",n2,n1,n3);
                    break;
                case 0:
                    switch (n3menor) {
                        case 1:
                            printf("O numero %d eh menor que o numero %d e o numero %d",n3,n1,n2);
                            break;
                    }
                default:
                    printf("Os 3 numeros %d,%d,%d sao iguais",n1,n2,n3);
            }
            break;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
