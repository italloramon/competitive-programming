#include <stdio.h>
#include <math.h>
int eh_primo(int numero, int i){
    if (numero == 1 || numero == 0)
    {
        return 0;
    }
    else
    {
        if (i == 1)
        {
            return 1;
        }
        else
        {
            if (numero % i == 0)
            {
                return 0;
            }
            else
            {
                return eh_primo(numero, i-1);
            }
        }
    }
}

int coprimos(int n1, int n2, int contador, int aux){
    int verifica_n1;
    int verifica_n2;
    verifica_n1 = eh_primo(n1, sqrt(n1));
    verifica_n2 = eh_primo(n2, sqrt(n2));
    if (verifica_n1 == 1 && verifica_n2 == 1)
    {
        return 1;
    }
    int maior;
    maior = n2;
    if (n1 > n2)
    {
        maior = n1;
    }
    if (contador > maior)
    {
        return aux;
    }
    else
    {
        if ((n1 % contador == 0) && (n2 % contador == 0))
        {
            aux++;
        }
    }
    coprimos(n1, n2, contador+1, aux);
    
}
int euclides(int a, int d){
    if (d == 0)
    {
        return a;
    }
    return euclides(d, a%d);
}

void serie(int t, int n, int m, int contador){
    if (contador + 1 == t)
    {
        int m_primo, n_atual;
        m_primo = eh_primo(m, sqrt(m));

        int co_primos;
        co_primos = euclides(n, m);

        if (m_primo == 1)
        {
            n_atual = 2  * m;
        }
        else if (co_primos == 1)
        {
            n_atual =  (2 * (n + m)) - 3;
        }
        else
        {
            n_atual = m + 1;
        }
        printf("%d\n", n_atual);
        return;
    }
    int m_primo, n_atual;
    m_primo = eh_primo(m, sqrt(m));

    int co_primos;
    co_primos = euclides(n, m);

    if (m_primo == 1)
    {
        n_atual = 2  * m;
    }
    else if (co_primos == 1)
    {
        n_atual =  (2 * (n + m)) - 3;
    }
    else
    {
        n_atual = m + 1;
    }
    printf("%d ", n_atual);
    contador++;
    
    n = m;
    m = n_atual;
    serie(t, n, m, contador);
}
int main(){
    int t, n, m;
    scanf("%d %d %d", &t, &n, &m);
    printf("%d %d ", n, m);
    serie(t, n, m, 2);
    return 0;
}
