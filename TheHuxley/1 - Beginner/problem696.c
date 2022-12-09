#include <stdio.h>
void ler_array(int numeros[], int i, int tamanho){
    if (i == tamanho)
    {
        return;
    }
    scanf("%d", &numeros[i]);
    ler_array(numeros, i+1, tamanho);
}
void qnts_vezes(int numeros[], int i, int contador, int num){
    if(i < 0)
    {
        printf("%d\n", contador);
        return;
    }
    if(numeros[i] == num)
    {
        contador++;
    }
    qnts_vezes(numeros, i-1, contador, num);
}
int main(){
    int numeros[10];
    ler_array(numeros, 0, 10);
    int num;
    scanf("%d", &num);
    qnts_vezes(numeros, 9, 0, num);

    return 0;
}
