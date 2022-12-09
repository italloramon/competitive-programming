#include <stdio.h>
void ler_array(int array[], int i, int tamanho){
    if (i == tamanho)
    {
        return;
    }
    scanf("%d", &array[i]);
    ler_array(array, i+1, tamanho);
}
void bubble(int array[], int i, int tamanho){
    if (i < tamanho - 1)
    {
        if (array[i] > array[i+1])
        {
            int aux;
            aux = array[i];
            array[i] = array[i+1];
            array[i+1] = aux; 
        }
        bubble(array, i+1, tamanho);
    }   
}
void sort(int array[], int i, int tamanho){
    if (i < tamanho)
    {
        bubble(array, i, tamanho);
        sort(array, i, tamanho-1);   
    }
}
void imprimir_array(int array[], int i, int tamanho){
    if (i == tamanho)
    {
        return;
    }
    printf("[%d]",array[i]);
    imprimir_array(array, i+1, tamanho);
}
int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int array[tamanho];
    ler_array(array, 0, tamanho);
    sort(array, 0, tamanho);
    imprimir_array(array, 0, tamanho);
    printf("\n");
    return 0;
}
