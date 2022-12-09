#include <stdio.h>
void ler_alturas(int alturas[], int i){
    if (i == 5)
    {
        return;
    }
    scanf("%d", &alturas[i]);
    ler_alturas(alturas, i+1);
}
void bubble(int alturas[], int i, int tamanho){
    if (i < tamanho)
    {
        if (alturas[i] > alturas[i+1])
        {
            int au;
            au = alturas[i];
            alturas[i] = alturas[i+1];
            alturas[i+1] = au;
        }
        bubble(alturas, i+1, tamanho);
    }
}
void sort(int alturas[], int i, int tamanho){
    if (i < tamanho)
    {
        bubble(alturas, i, tamanho);
        sort(alturas, i, tamanho-1);
    }
}
void imprimir(int alturas[]){
    printf("%d\n%d\n%d\n", alturas[0], alturas[2], alturas[4]);
}
int main(){
    int alturas[5];
    ler_alturas(alturas, 0);
    sort(alturas, 0, 5);
    imprimir(alturas);
    return 0;
}
