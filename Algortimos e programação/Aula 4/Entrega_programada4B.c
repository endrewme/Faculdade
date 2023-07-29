#include <stdio.h>

int main() {
    int id,senha;
    scanf("%d %d", &id,&senha);
    switch (id) {
        case 1111:
		    switch (senha) {
                case 1001:
                    printf("Entrada A\n");break;
                default:
                    printf("Senha incorreta!\n");
        }
        break;
        case 2222:
            switch (senha) {
                case 2020:
                    printf("Entrada B\n");
                    break;
                default:
                    printf("Senha incorreta!\n");
            }
            break;
        case 3333:
            switch (senha) {
                case 3231:
                    printf("Entrada C\n");
                break;
                default:
                    printf("Senha incorreta!\n");
            }
        break;
    }
    system("pause");
    return 0;
}
