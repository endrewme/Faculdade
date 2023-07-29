#include<stdio.h>
#include<stdlib.h>
void loop(){
    int* trava;
    while(1){
        trava = (int*)malloc(sizeof(int)*999);
        if (trava == NULL) break;
    }
}
int main(){
    loop();
    return 0;
}