#include <stdio.h>
void ler_matriz(int n, int matriz[][n]){
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
int main(){
    int n, i, j;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Vazia\n");
    }
    else
    {
        int matriz_a[n][n], matriz_b[n][n], matriz_r[n][n];
        ler_matriz(n, matriz_a);
        ler_matriz(n, matriz_b);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                matriz_r[i][j] = matriz_a[i][j] + matriz_b[i][j];
                printf("%d\n", matriz_r[i][j]);
            }
        }
    }
    return 0;
}
