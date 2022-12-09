#include <stdio.h>
#define TAM 3
void ler_matriz(int matriz[][TAM]){
    int i, j;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void brincando(int matriz[][TAM]){
    int i, j, menor=matriz[0][0], delta, soma_diagonal=0, c=0;
    double soma=0, m;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] > 0)
            {
                soma += matriz[i][j];
                c++;
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
            if (i != j)
            {
                soma_diagonal += matriz[i][j];
            }
            
        }
    }

    m = soma / c;

    if (menor % 2 == 0)
    {
        delta = 1;
    }
    else     
    {
        delta = 0;
    }
    printf("%.2lf %d %d %d\n", m, menor, delta, soma_diagonal);
} 
int main(){
    int matriz[TAM][TAM];
    ler_matriz(matriz);
    brincando(matriz);
    return 0;
}
