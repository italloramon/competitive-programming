#include <stdio.h>
int main(){
    double litros, valor, valor_desc;
    char combustivel;
    scanf("%lf\n %c", &litros, &combustivel);

    if (combustivel == 'A')
    {
        valor = litros * 1.90;
        if (litros <= 20)
        {
            valor_desc = valor * 97/100;
        }
        else
        {
            valor_desc = valor * 95/100;
        }
        printf("R$ %.2lf\n", valor_desc);
    }

    if (combustivel == 'G')
    {
        valor = litros * 2.50;
        if (litros <= 20)
        {
            valor_desc = valor * 96/100;
        }
        else
        {
            valor_desc = valor * 94/100;
        }
        printf("R$ %.2lf\n", valor_desc);
    }

    if (combustivel == 'D')
    {
        valor = litros * 1.66;
        if (litros <= 25)
        {
            valor_desc = valor;
        }
        else
        {
            valor_desc = valor * 96/100;
        }
        printf("R$ %.2lf\n", valor_desc);
    }

    return 0;
}
