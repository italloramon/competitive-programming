#include <stdio.h>
int main(){
    int n, i;
    int d_vertical=0, d_horizontal=0, posicao;
    int c_help = 1;
    char s;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &s);
        if (s == 'S')
        {
            if (d_vertical < 200)
            {
                d_vertical += 10;
            }
        }
        else if (s == 'D')
        {
            if (d_vertical > 0)
            {
                d_vertical -=10;
            }
        }
        else if (s == 'F')
        {
            if (d_vertical > 0 && d_horizontal < 2000)
            {
                if (posicao == -1 && c_help % 2 == 0)
                {
                    d_horizontal-=10;
                }
                else
                {
                   d_horizontal+=10; 
                }
            }
        }
        else if (s == 'V')
        {
            if (d_vertical > 0 && d_horizontal < 2000)
            {
                d_horizontal+=10;
                posicao = -1;
                c_help += 1;
            } 
        }
    }
    if (d_horizontal < 0)
    {
        d_horizontal *= -1;
    }
    printf("%d %d\n", d_vertical, d_horizontal);
    return 0;
}
