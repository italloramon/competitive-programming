#include <stdio.h>
int funcao(int n, int contador, int total){
    int resto;
    contador++;
    if (n <= 9)
    {
        if (n % 2 == 0)
        {
            total += n * 2 * contador;
        }
        else
        {
            total += n * 3 * contador;
        }
        return total;
    }
    resto = n % 10;
    if (resto % 2 == 0)
    {
        total += resto * 2 * contador;
    }
    else
    {
        total += resto * 3 * contador;
    }
    return funcao(n / 10, contador, total);
}
void scan(int n){
    if (n == 0)
    {
        return;
    }
    printf("%d\n", funcao(n, 0, 0));
    scanf("%d", &n);
    scan(n);
}
int main(){
    int n;
    scanf("%d", &n);
    scan(n);
    return 0;
}
