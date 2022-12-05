#include <stdio.h>
int main(){
    double salario, renda_comprometida, p_comprometida, qnt_falta;
    scanf("%lf\n %lf", &salario, &renda_comprometida);
    p_comprometida = (100 * renda_comprometida) / salario;
    if (p_comprometida > 30)
    {
        printf("0.00\n");
    }
    else
    {
        qnt_falta = 30 - p_comprometida;
        printf("%.2lf\n", ((qnt_falta / 100) * salario));   
    }
    
    return 0;
}
