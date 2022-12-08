#include <stdio.h>
int divisivel(int n, int contador, int auxiliar){
    if (auxiliar > n)
    {
        return contador;
    }
    if (n % auxiliar == 0)
    {
        if (auxiliar % 3 == 0)
        {
            contador++;
        }
    }
    auxiliar++;
    return divisivel(n, contador, auxiliar);
}

int main(){
    int n;
    scanf("%d", &n);
    if (divisivel(n, 0, 1) == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else
    {
        printf("%d", divisivel(n, 0, 1));
    }
    
    return 0;
}
