#include <stdio.h>
void ler_apostas(int n, int apostas[n][10]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            char virgula[1];
            scanf("%d%c", &apostas[i][j], &virgula[0]);
            if (virgula[0] != ',') break;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int apostas[n][10];
    ler_apostas(n, apostas);
    int premio[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &premio[i]);
    }
    
    //CONFERIR
    int contador_total[2] = {0};
    int p = 0;
    while (p < n)
    {
        int i=0, j=0;
        int y = 6;
        int z = 10;
        int flag = 0;
        for (i = 0; i < y; i++)
        {
            for (j = 0; j < z; j++)
            {
                if (premio[i] == apostas[p][j])
                {
                    break;
                }
            }
            if (j == z)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            contador_total[1]++;
        }
        p++;
    }
    
    printf("Total de ganhadores: %d\n", contador_total[1]);
    return 0;
}
