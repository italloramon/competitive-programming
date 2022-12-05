#include <stdio.h>
int main(){
    int dia, estudante, socio, ingresso;
    scanf("%d %d %d", &dia, &estudante, &socio);
    if (dia <= 4)
    {
        if (estudante == 1)
        {
            printf("ESTUDANTE: R$ 10.50\n");
        }
        else if (socio == 1)
        {
            printf("SOCIO: R$ 15.00\n");
        }
        else
        {
            printf("COMUM: R$ 15.00\n");
        }
        
    }
    else
    {
         if (estudante == 1)
        {
            printf("ESTUDANTE: R$ 21.00\n");
        }
        else if (socio == 1)
        {
            printf("SOCIO: R$ 24.00\n");
        }
        else
        {
            printf("COMUM: R$ 30.00\n");
        }
    }
    return 0;
}
