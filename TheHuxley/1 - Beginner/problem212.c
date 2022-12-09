#include <stdio.h>
int main(){
    int i; 
    double nota, total, menor, maior;
    for ( i = 0; i < 5; i++)
    {
        scanf("%lf", &nota);
        if (i == 0)
        {
            menor = nota;
            maior = nota;
        }
        else
        {
            if (nota < menor)
            {
                menor = nota;
            }
            if (nota > maior)
            {
                maior = nota;
            }
            
        }
        total += nota;
    }
    printf("%.1lf\n", total-menor-maior);
    return 0;
}
