#include <stdio.h>
#define LIN 9
#define COL 9
void ler_matriz(int matriz_geral[][COL]){
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &matriz_geral[i][j]);
        }
    }
}
void zerar_array(int array[]){
    for (int i = 0; i <= 9; i++)
    {
        array[i] = 0;
    }
}
int checarLinhas(int matriz_geral[][COL]){
    int c[10] = {0};
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            c[matriz_geral[i][j]]++;
        }
        for (int k = 1; k <= 9; k++)
        {
            if (c[k] != 1)
            {
                return 0;
            }
        }
        zerar_array(c);
    }
    return 1;
}
int checarColunas(int matriz_geral[][COL]){
    int c[10] = {0};
    for (int j = 0; j < COL; j++)
    {
        for (int i = 0; i < LIN; i++)
        {
            c[matriz_geral[i][j]]++;
        }
        for (int k = 1; k <= 9; k++)
        {
            if (c[k] != 1) return 0;
        }
        zerar_array(c);
    }
    return 1;
}
int checarMatrizes(int matriz_geral[][COL]){
    int c[10] = {0};
    for (int m = 0; m < LIN; m+=3)
    {
        for (int n = 0; n < COL; n+=3)
        {
            for (int i = m; i < m+3; i++)
            {
                for (int j = n; j < n+3; j++)
                {
                    c[matriz_geral[i][j]]++;
                }
            }
            for (int k = 1; k <= 9; k++)
            {
                if (c[k] != 1)
                {
                    return 0;
                }
            }
            zerar_array(c);
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int matriz_geral[LIN][COL];
    int contador = 1;
    while (contador <= n)
    {
        ler_matriz(matriz_geral);
        int l = checarLinhas(matriz_geral);
        int c = checarColunas(matriz_geral);
        int m = checarMatrizes(matriz_geral);
        if (l == 1 && c == 1 && m == 1)
        {
            printf("Instancia %d\nSIM\n", contador);
        }
        else printf("Instancia %d\nNAO\n", contador);
        printf("\n");
        contador++;
    }
    return 0;
}
