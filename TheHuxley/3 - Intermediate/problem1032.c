#include <stdio.h>
void ler_numeros(int i, int tamanho[], int buracos[]){
    if (i == tamanho[0])
    {
        return;
    }
    scanf("%d", &buracos[i]);
    ler_numeros(i+1, tamanho, buracos);
}
int verificar(int verificados[], int i, int j){
    if (i < 0)
    {
        return 0;
    }
    if (verificados[i] == j)
    {
        return 1;
    }
    return verificar(verificados, i-1, j);
}
void n_tocas(int buracos[], int i, int j, int contador, int verificados[], int tamanho[], int tocas){
    if (contador == tamanho[0])
    {
        printf("%d\n", tocas);
        return;
    }
    int v;
    j = buracos[i];
    verificados[contador] = i;
    i = j;
    v = verificar(verificados, tamanho[0]-1, j);
    if (v == 1)
    {
        tocas++;
        i = passar_num(tamanho, 0, verificados, 0, 0);
    }
    
    n_tocas(buracos, i, j, contador+=1, verificados, tamanho, tocas);
}
int passar_num(int tamanho[], int i, int verificados[], int pro_num, int v){
    if (i == tamanho[0])
    {
        if (v == tamanho[0])
        {
            return pro_num;
        }
        else
        {
            return passar_num(tamanho, 0, verificados, pro_num+=1, 0);
        }   
    }
    if (pro_num != verificados[i])
    {
        v++;
    }
    return passar_num(tamanho, i+=1, verificados, pro_num, v);
}
int main(){
    int tamanho[1];
    scanf("%d", &tamanho[0]);
    int buracos[tamanho[0]];
    int verificados[tamanho[0]];
    ler_numeros(0, tamanho, buracos);
    n_tocas(buracos, 0, 0, 0, verificados, tamanho, 0);
    return 0;
}
