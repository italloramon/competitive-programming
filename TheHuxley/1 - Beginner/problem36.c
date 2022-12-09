#include <stdio.h>
int main(){
    int m, n;
    int maior = 0;
    int c = 1;
    scanf("%d %d", &m, &n);
    while (c <= n)
    {
        if (m * c <= n)
        {
            maior = m * c;
        }
        c++;
    }
    if (maior == 0)
    {
        printf("sem multiplos menores que %d\n", n);
    }
    else
    {
        printf("%d\n", maior);
    }
    return 0;
}
