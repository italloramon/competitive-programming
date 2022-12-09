#include <stdio.h>
#include <string.h>
void ler_string(char string[], int i){
    if (i == 255){
        return;
    }
    scanf("%c", &string[i]);
    ler_string(string, i+1);
}
void inverter_string(char string[], int tamanho_real){
    if (tamanho_real < 0){
        return;
    }
    printf("%c", string[tamanho_real]);
    inverter_string(string, tamanho_real-1);
}
int main(){
    char string[255];
    int tamanho_real;
    ler_string(string, 0);
    tamanho_real = strlen(string);
    inverter_string(string, tamanho_real);
}
