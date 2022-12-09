#include <stdio.h>
void ler_matriz(int n, int m, int matriz[n][m]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimir_matriz(int n, int m, int matriz[n][m]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j+1==m)
            {
                printf("%d", matriz[i][j]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}
void plantar(int n, int m, int matriz[n][m], int inseticida[]){
    int p;
    char c[1];
    while (1>0)
    {
        c[0] = 'a';
        scanf("%d%c", &p, &c[0]);
        for (int j = 0; j < m; j++)
        {
            if (matriz[p][j] == 0)
            {
                matriz[p][j] = 1;
                inseticida[0] += 2;
            }
        }
        if (c[0] != ' ')
        {
            break;
        }    
    }
}
void temporada(int n, int m, int matriz[n][m], int inseticida[]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] > 0 && matriz[i][j] < 3)
            {
                if (matriz[i][j] == 1)
                {
                    inseticida[0] += 2;
                }
                matriz[i][j]++;
            }
        }
    }
}
void ataque(int n, int m, int matriz[n][m]){
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == x && y == j)
            {
                matriz[i][j] = -1;
            }
        }
    }
}
void colher(int n, int m, int matriz[n][m], int colhidos[]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] == 3)
            {
                matriz[i][j] = 0;
                colhidos[0]++;
            }
            else if (matriz[i][j] == -1)
            {
                matriz[i][j] = 0;
            }
        }
    }
}
int main(){
    int n, m;
    int inseticida[1] = {0};
    int colhidos[1] = {0};
    scanf("%d %d", &n, &m);
    int plantacao[n][m];
    ler_matriz(n, m, plantacao);
    //imprimir_matriz(n, m, plantacao);
    char decisao[10];
    while (scanf(" %[^\n]", decisao) != EOF)
    {
        if (decisao[0] == 'P')
        {
            plantar(n, m, plantacao, inseticida);
            //imprimir_matriz(n, m, plantacao);
        }
        else if (decisao[0] == 'T')
        {
            temporada(n, m, plantacao, inseticida);
            //imprimir_matriz(n, m, plantacao);
        }
        else if (decisao[0] == 'C')
        {
            colher(n, m, plantacao, colhidos);
            //imprimir_matriz(n, m, plantacao);
        }
        else if (decisao[0] == 'A')
        {
            ataque(n, m, plantacao);
            //imprimir_matriz(n, m, plantacao);
        }   
    }
    imprimir_matriz(n, m, plantacao);
    printf("Foram colhidos %d morangos.\n", colhidos[0]);
    printf("Foram utilizados %dml de inseticida.\n", inseticida[0]);
    return 0;
}
