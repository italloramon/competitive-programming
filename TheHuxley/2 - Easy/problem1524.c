#include <stdio.h>
int main(){
    double salario, v_aumento;
    scanf("%lf", &salario);
    if (salario <= 280)
    {
        v_aumento = salario * 0.2;
        printf("%.2lf\n20\n%.2lf\n%.2lf\n", salario, v_aumento, salario + v_aumento);
    }
    else if (salario < 700)
    {
        v_aumento = salario * 0.15;
        printf("%.2lf\n15\n%.2lf\n%.2lf\n", salario, v_aumento, salario + v_aumento);
    }
    else if (salario < 1500)
    {
        v_aumento = salario * 0.1;
        printf("%.2lf\n10\n%.2lf\n%.2lf\n", salario, v_aumento, salario + v_aumento);
    }
    else
    {
        v_aumento = salario * 0.05;
        printf("%.2lf\n5\n%.2lf\n%.2lf\n", salario, v_aumento, salario + v_aumento);
    }
    
    return 0;
}
