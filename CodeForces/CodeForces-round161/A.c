#include <stdio.h>

int main(){
    int m[5][5];
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
            if (m[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    
    int c = 0;
    while (b > 2)
    {
        b--;
        c++;
    }
    while (a > 2)
    {
        a--;
        c++;
    }
    while (b < 2)
    {
        b++;
        c++;
    }
    while (a < 2)
    {
        a++;
        c++;
    }
    printf("%d\n", c);
}
