#include <stdio.h>
void ler_matriz(int matriz[][4], int k){
    int i, j;
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 4; i++)
        {
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                matriz[i][j] *= k;
            }
        }
    }
}
int main(){
    int k;
    scanf("%d", &k);
    while (k != 0)
    {
        int matriz[4][4], i, j;
        ler_matriz(matriz, k);
        
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        scanf("%d", &k);
    }
    return 0;
}
