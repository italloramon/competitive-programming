#include <stdio.h>
int main(){
    int a, b, c, menor, maior, meio;
    scanf("%d %d %d", &a, &b, &c);
    menor = a;
    maior = c;
    meio = b;
    if (a > maior && b >= c)
    {
        maior = a;
        meio = b;
        menor = c;
    }
    if (a > maior && b < c)
    {
        maior = a;
        meio = c;
        menor = b;
    }
    if (b > maior && a >= c)
    {
        maior = b;
        meio = a;
        menor = c;
    }
    if (b > maior && a < c)
    {
        maior = b;
        meio = c;
        menor = a;
    }
    if (c == maior)
    {
       if (b < a)
        {
            menor = b;
            meio = a;
        }
    }
    printf("%d\n%d\n%d\n", maior, meio, menor);
    return 0;
}
