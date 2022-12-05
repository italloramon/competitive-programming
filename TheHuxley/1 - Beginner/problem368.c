#include <stdio.h>
int main(){
    double salario;
    scanf("%lf", &salario);
    if (salario > 500)
    {
        printf("%.2lf\n", salario * 1.1);
    }
    else if (salario > 300)
    {
        printf("%.2lf\n", salario * 1.07);
    }
    else
    {
        printf("%.2lf\n", salario * 1.05);
    }
    
    return 0;
}
