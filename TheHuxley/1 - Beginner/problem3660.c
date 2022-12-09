#include <stdio.h>
void ler_matriz(int x, int matriz[][x]){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
int linhas_pares(int x, int matriz[][x]){
    int total_pares = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i%2 == 0)
            {
                total_pares += matriz[i][j];
            }
        }
    }
    return total_pares;
}
int colunas_impares(int x, int matriz[][x]){
    int total_impares = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (j%2 != 0)
            {
                total_impares += matriz[i][j];
            }
        }
    }
    return total_impares;
}
int diagonal(int x, int matriz[][x]){
    int total_diagonal = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (j == i)
            {
                total_diagonal += matriz[i][j];
            }
        }
    }
    return total_diagonal;
}
int main(){
    int x, arthur, entidade, intrometido;
    scanf("%d", &x);
    int matriz[x][x];
    ler_matriz(x, matriz);
    arthur = linhas_pares(x, matriz);
    entidade = colunas_impares(x, matriz);
    intrometido = diagonal(x, matriz);
    if (arthur > entidade && arthur > intrometido)
    {
        printf("Arthur venceu!\n");
        printf("Resultado: %d\n", arthur);
    }
    else if (entidade > arthur && entidade > intrometido)
    {
        printf("A entidade venceu!\n");
        printf("Resultado: %d\n", entidade);
    }
    else if (intrometido > arthur && intrometido > entidade)
    {
        printf("O intrometido venceu!\n");
        printf("Resultado: %d\n", intrometido);
    }
    else if (arthur == entidade && arthur != intrometido)
    {
        printf("Empate!\n");
        printf("Resultado: %d\n", arthur);
    }
    else if (arthur == intrometido && arthur != entidade)
    {
        printf("Empate!\n");
        printf("Resultado: %d\n", arthur);
    }
    else if (entidade == intrometido && entidade != arthur)
    {
        printf("Empate!\n");
        printf("Resultado: %d\n", entidade);
    }
    else
    {
        printf("Empate!\n");
        printf("Resultado: %d\n", arthur);
    }
    return 0;
}
