#include <stdio.h>
int main(){
    long n;
    int resto;
    scanf("%ld", &n);
    if (n == 0)
    {
        printf("NULO\n");
    }
    else if ((n % 2) == 0)
    {
        if (n > 0)
        {
            printf("POSITIVO PAR\n");
        }
        else
        {
            printf("NEGATIVO PAR\n");
        }
    }
    else
    {
        if (n > 0)
        {
            printf("POSITIVO IMPAR\n");
        }
        else
        {
            printf("NEGATIVO IMPAR\n");
        }
    }
    return 0;
}
