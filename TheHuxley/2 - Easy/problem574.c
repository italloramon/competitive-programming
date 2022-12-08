#include <stdio.h>
int main(){
    double dolar, aliquota, produto_dolar, frete_dolar;
    double produto_real, frete_real, valor_total, imposto, icms, total_imposto, total_pagar;
    int c;
    scanf("%lf %lf %lf %lf", &dolar, &aliquota, &produto_dolar, &frete_dolar);
    produto_real = produto_dolar * dolar;
    frete_real = frete_dolar * dolar;
    valor_total = produto_real + frete_real;
    if (produto_dolar >= 2500)
    {
        /* C�LCULO SEM FRETE */
        imposto = 0.6 * (valor_total - frete_real);
        icms = ((produto_real + imposto) / (1 - aliquota/100)) * aliquota/100;
        c = 0;
    }
    else
    {
        /* C�LCULO COM FRETE */
        imposto = 0.6 * valor_total;
        icms = ((produto_real + frete_real + imposto) / (1 - aliquota/100)) * aliquota/100;
        c = 1;
    }
    total_imposto = imposto + icms;
    total_pagar = total_imposto + valor_total;
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", dolar, produto_real, frete_real, valor_total, imposto, icms, total_imposto, total_pagar);
    if (c == 0)
    {
        printf("Impostos calculados sem o frete\n");
    }
    else
    {
        printf("Impostos calculados com o frete\n");
    }
    
    return 0;
}
