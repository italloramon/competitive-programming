#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c; 
    double delta, x1, x2;
    printf("Digite o coeficiente A:\n");
    scanf("%lf", &a);
    printf("Digite o coeficiente B:\n");
    scanf("%lf", &b);
    printf("Digite o coeficiente C:\n");
    scanf("%lf", &c);
    delta = pow(b, 2) - (4 * a * c);
    if (delta < 0)
    {
        printf("A funcao nao tem raizes reais\n");
    }
    else if (delta >= 0)
    {
        x1 = (-1 * b + sqrt(delta)) / (2*a);
        x2 = (-1 * b - sqrt(delta)) / (2*a);
        if (x1 < 1 && x2 < 1)
        {
            printf("Primeira raiz: %.1lf\n", x1);
            printf("Segunda raiz: %.1lf\n", x2);
        }
        else
        {
            printf("Primeira raiz: %.0lf\n", x1);
            printf("Segunda raiz: %.0lf\n", x2);
        }
    }
    
    return 0;
}
