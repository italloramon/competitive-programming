#include <stdio.h>
#include <math.h>
int conversor(int n, int contador, int total){
    if (n == 1)
    {
        total += pow(2, contador) * 1;
    }
    if (contador == 0)
    {
        return total;    
    }
    contador--;
    scanf("%d", &n);
    return conversor(n, contador, total);    
}
int main(){
    int n, i1, i2, i3, i4;
    scanf("%d", &n);
    i1 = conversor(n, 7, 0);
    scanf("%d", &n);
    i2 = conversor(n, 7, 0);
    scanf("%d", &n);
    i3 = conversor(n, 7, 0);
    scanf("%d", &n);
    i4 = conversor(n, 7, 0);
    printf("%d.%d.%d.%d\n", i1, i2, i3, i4);
    return 0;
}
