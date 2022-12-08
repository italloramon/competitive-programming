#include <stdio.h>
int eh_primo(int n, int aux){
    if (aux == n)
    {
        return 1; //Eh primo
    }
    if (n % aux == 0)
    {
        return 0;
    }
    aux++;
    return eh_primo(n, aux);
}

int fatorial(int n){
    if (n <= 1)
    {
        return 1;
    }
    return n * fatorial(n -1);
    
}

int prox_primo(int n){
    n++;
    if (eh_primo(n, 2) == 1)
    {
        return n;
    }
    return prox_primo(n);
    
}

void resultadoo(int n, int contador, double resultado, int primo){
    if (contador >= n)
    {
        if (primo >= contador)
        {
            resultado += fatorial(contador) / (primo*1.0);
        }
        else
        {
            primo = prox_primo(primo);
            resultado += fatorial(contador) / (primo*1.0);
        }
        printf("%d!/%d\n", contador, primo);
        printf("%.2lf\n", resultado + 1);
        return;
    }
    if (primo >= contador)
    {
        resultado += fatorial(contador) / (primo*1.0);
        printf("%d!/%d + ", contador, primo);
    }
    else
    {
        primo = prox_primo(primo);
        resultado += fatorial(contador) / (primo*1.0);
        printf("%d!/%d + ", contador, primo);
    }
    
    contador++;
    
    resultadoo(n, contador, resultado, primo);
}
int main(){
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0.00\n");
    }
    else if (n == 1)
    {
        printf("1!/1\n1.00\n");
    }
    else
    {
        printf("1!/1 + ");
        resultadoo(n, 2, 0, 2);
    }
    return 0;
}
