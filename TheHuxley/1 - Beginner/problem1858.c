#include <stdio.h>
void ler_array(int numeros[], int i, int tamanho){
    if (i == tamanho)
    {
        return;
    }
    scanf("%d", &numeros[i]);
    ler_array(numeros, i+1, tamanho);
}
void menor_valor(int numeros[], int i, int menor){
    if (i < 0)
    {
        printf("%d\n", menor);
        return;
    }
    if (numeros[i] < menor)
    {
        menor = numeros[i];
    }
    menor_valor(numeros, i-1, menor);    
}
void maior_valor(int numeros[], int i, int maior){
    if (i < 0)
    {
        printf("%d\n", maior);
        return;
    }
    if (numeros[i] > maior)
    {
        maior = numeros[i];
    }
    maior_valor(numeros, i-1, maior);
}
int main(){
    int numeros[6];
    ler_array(numeros, 0, 6);
    menor_valor(numeros, 4, numeros[5]);
    maior_valor(numeros, 4, numeros[5]);
    return 0;
}
