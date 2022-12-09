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
    int i, j, maior=matriz[0][0], delta, soma_diagonal=0;
    double soma=0, m;
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            soma += matriz[i][j];
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
            if (i == j)
            {
                soma_diagonal += matriz[i][j];
            }
            
        }
    }

    m = soma / 9;

    if (maior > 0)
    {
        delta = 1;
    }
    else if (maior < 0)
    {
        delta = -1;
    }
    else
    {
        delta = 0;
    }
    
    printf("%.2lf %d %d %d\n", m, maior, delta, soma_diagonal);
} 
int main(){
    int matriz[TAM][TAM];
    ler_matriz(matriz);
    brincando(matriz);
    return 0;
}
