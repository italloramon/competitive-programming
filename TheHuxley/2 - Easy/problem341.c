#include <stdio.h>

double calcular(int d, double p, int c)
{
    if (c == 3)
    {
        return  p;
    }
    if(p <= 45 && c == 0)
    {
        return p;
    }
    if(p <= 45)
    {
        p = 45;
        return p;
    }
    if (p <= 100)
    {
        if (d == 0)
        {
            p -= (p * 0.25) / 2;
        }
        if (d == 1)
        {
            p -= (p * 0.20) / 2;
        }
        if (d == 2)
        {
            p -= (p * 0.18) / 2;
        }
        if (d == 3)
        {
            p -= (p * 0.15) / 2;
        }
        if (d == 4)
        {
            p -= (p * 0.12) / 2;
        }
        if (d == 5)
        {
            p -= (p * 0.10) / 2;
        }
    }
    else
    {
        if (d == 0)
        {
            p -= p * 0.25;
        }
        if (d == 1)
        {
            p -= p * 0.20;
        }
        if (d == 2)
        {
            p -= p * 0.18;
        }
        if (d == 3)
        {
            p -= p * 0.15;
        }
        if (d == 4)
        {
            p -= p * 0.12;
        }
        if (d == 5)
        {
            p -= p * 0.10;
        }
    }
    return calcular(d, p, c+=1);
}
int preco(int n, int contador)
{
    if (contador == n)
    {
        return;
    }
    int d;
    double p;
    scanf("%d %lf", &d, &p);
    printf("Jogo[%d] = R$%.2lf\n", contador, calcular(d, p, 0));
    preco(n, contador+=1);
}
int main(){
    int n;
    scanf("%d", &n);
    preco(n, 0);
    return 0;
}
