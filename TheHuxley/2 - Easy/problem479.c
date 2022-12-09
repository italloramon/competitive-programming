#include <stdio.h>
void colisao(int n, int m, int campo[n][m], int c, char movimentos[c], int x, int y){
    for (int i = 0; i < c; i++)
    {
        if (movimentos[i] == 'C')
        {
            if (x > 0)
            {
                if (campo[x-1][y] == 1)
                {
                    x--;
                }
            }
        }
        else if (movimentos[i] == 'B')
        {
            if (x < n-1)
            {
                if (campo[x+1][y] == 1)
                {
                    x++;
                }  
            }
        }
        else if (movimentos[i] == 'E')
        {
            if (y > 0)
            {
                if (campo[x][y-1] == 1)
                {
                    y--;
                }
            }
        }
        else if (movimentos[i] == 'D')
        {
            if (y < m-1)
            {
                if (campo[x][y+1] == 1)
                {
                    y++;
                }
            }  
        }
    }
    printf("(%d,%d)\n", x, y);
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int campo[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &campo[i][j]);
        }
    }
    int c;
    scanf("%d", &c);
    char movimentos[c];
    for (int i = 0; i < c; i++)
    {
        scanf(" %c", &movimentos[i]);
    }
    int x, y;
    scanf("%d %d", &x, &y);

    colisao(n, m, campo, c, movimentos, x, y);

    return 0;
}
