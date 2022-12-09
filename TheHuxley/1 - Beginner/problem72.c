#include <stdio.h>
void ler_array(int numeros[], int i, int tamanho){
    if(i == tamanho){
        return;
    }
    scanf("%d", &numeros[i]);
    ler_array(numeros, i+1, tamanho);
}
void inverso(int numeros[], int i){
    if (i == 0)
    {
        printf("%d", numeros[i]);
        return;
    }
    printf("%d ", numeros[i]);
    inverso(numeros, i-1);
}
int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int numeros[tamanho];
    ler_array(numeros, 0, tamanho);
    inverso(numeros, tamanho-1);
    return 0;
}
