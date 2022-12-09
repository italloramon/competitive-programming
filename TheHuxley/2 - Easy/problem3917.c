#include <stdio.h>
void ler_matriz(int m, int n, char matriz[m][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %c", &matriz[i][j]);
        }
    }
}
void i_matriz(int m, int n, char matriz[m][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
}
void calculo(int m, int n, char matriz[m][n]){
    int x, y, x1, x2, x3, y1, y2, y3;
    int c=1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == 'M')
            {
                x = i;
                y = j;
            }
            if (matriz[i][j] == 'L')
            {
                if(c==1)
                {
                    x1 = i;
                    y1 = j;    
                }
                else if (c == 2)
                {
                    x2 = i;
                    y2 = j;
                }
                else if (c == 3)
                {
                    x3 = i;
                    y3 = j;
                }
                c++;
            }
        }
    }
    int x_d1, x_d2, x_d3, y_d1, y_d2, y_d3;
    x_d1 = x - x1;
    y_d1 = y - y1;
    if (x_d1 < 0)
    {
        x_d1 *= -1;
    }
    if (y_d1 < 0)
    {
        y_d1 *= -1;
    }
    x_d2 = x - x2;
    y_d2 = y - y2;
    if (x_d2 < 0)
    {
        x_d2 *= -1;
    }
    if (y_d2 < 0)
    {
        y_d2 *= -1;
    }
    x_d3 = x - x3;
    y_d3 = y - y3;
    if (x_d3 < 0)
    {
        x_d3 *= -1;
    }
    if (y_d3 < 0)
    {
        y_d3 *= -1;
    }
    int d1, d2, d3;
    d1 = x_d1 + y_d1;
    d2 = x_d2 + y_d2;
    d3 = x_d3 + y_d3;
    //printf("%d %d\nL1: %d %d\nL2: %d %d\nL3:%d %d\n", x, y, x1, y1, x2, y2, x3, y3);
    //printf("%d %d %d\n", d1, d2, d3);
    int menor = d1;
    if (d2 < menor)
    {
        menor = d2;
    }
    if (d3 < menor)
    {
        menor = d3;
    }
    if (menor <= 8)
    {
        if (menor == d1)
        {
            printf("MARQUINHOS SERA APROVADO! Coordenadas: (%d,%d)\n", x1, y1);
        }
        else if (menor == d2)
        {
            printf("MARQUINHOS SERA APROVADO! Coordenadas: (%d,%d)\n", x2, y2);
        }
        else if (menor == d3)
        {
            printf("MARQUINHOS SERA APROVADO! Coordenadas: (%d,%d)\n", x3, y3);
        }
    }
    else
    {
        printf("AINDA TEM A FINAL :(\n");
    }
}
int main(){
    int m, n;
    while(scanf("%d %d", &m, &n) != EOF)
    {
        char matriz[m][n];
        ler_matriz(m, n, matriz);
        //i_matriz(m, n, matriz);
        calculo(m, n, matriz);
    }
    return 0;
}
