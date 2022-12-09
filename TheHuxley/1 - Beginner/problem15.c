#include <stdio.h>
int main(){
    char nome[121];
    fgets(nome, 121, stdin);
    printf("Seja muito bem-vindo %s", nome);
    return 0;
}
