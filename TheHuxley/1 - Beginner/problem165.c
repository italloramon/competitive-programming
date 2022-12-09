#include <stdio.h>
void ler_matriz(int n, int quadrado[][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &quadrado[i][j]);
        }
    }
}
int ehIgual(int array[], int n){
    int c=0, padrao=array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] == padrao)
        {
            c++;
        }
    }
    if (c==n) return 1;
    else return 0;
}
void ehMagico(int n, int quadrado[][n]){
    int soma_diagonal_p=0, soma_diagonal_s=0, soma_horizontal=0, soma_vertical=0;
    int total_s[n], total_j[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma_horizontal += quadrado[i][j];
            if (i == j)
            {
                soma_diagonal_p += quadrado[i][j];
            }
            if (i+j == n-1)
            {
                soma_diagonal_s += quadrado[i][j];
            }
        }
        total_s[i] = soma_horizontal;
        soma_horizontal = 0;
    }
    if (ehIgual(total_s, n))
    {
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                soma_vertical += quadrado[i][j];
            }
            total_j[j] = soma_vertical;
            soma_vertical = 0;
        }

        if (ehIgual(total_j, n))
        {
            if (soma_diagonal_p == soma_diagonal_s && total_s[0] == total_j[0] && soma_diagonal_p == total_s[0] && soma_diagonal_p == total_j[0] && soma_diagonal_s == total_s[0] && soma_diagonal_s == total_j[0])
            {
                printf("%d\n", total_s[0]);
            }
            else printf("-1\n");
        }
        else printf("-1\n");
    }
    else printf("-1\n");
}
int main(){
    int n;
    scanf("%d", &n);
    int quadrado[n][n];
    ler_matriz(n, quadrado);
    ehMagico(n, quadrado);
    return 0;
}
