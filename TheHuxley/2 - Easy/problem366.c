#include <stdio.h>
int main(){
    int n, s, i, menor, movimentacao;
    scanf("%d %d", &n, &s);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &movimentacao);
        if (movimentacao >= 0)
        {
            s+=movimentacao;
        }
        else if (movimentacao < 0)
        {
            s+=movimentacao;
        }
        if (i == 0)
        {
            menor = s;
        }
        else 
        {
            if (s < menor)
            {
                menor = s;
            }
        }
    }
    printf("%d\n", menor);
}
