#include <stdio.h>
void triangular(int n, int contador, int temp, int contadorextra){
    if (temp > n/2)
    {
        if (contador == 0)
        {
            printf("Falso\n");
            return;
        }
        
    }
    if ( (n % temp == 0) && (n % (temp + 1) == 0) && (n % (temp + 2) == 0) && n == (temp * (temp+1) * (temp+2)))
    {
        printf("%d * %d * %d = %d\n", temp, temp+1, temp+2, n);
        printf("Verdadeiro\n");
        contador++;
        return;
    }
    contadorextra++;
    temp = contadorextra;
    triangular(n, contador, temp, contadorextra);
}
int main(){
    int n;
    scanf("%d", &n);
    triangular(n, 0, 1, 1);
    return 0;
}
