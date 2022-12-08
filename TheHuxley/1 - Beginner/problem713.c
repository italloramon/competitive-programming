#include <stdio.h>
void multiplos(int n, int a, int b, int contador){
    if (a == b)
    {
        if (a % n == 0)
        {
            printf("%d\n", a);
            contador++;
        }
        
        if (contador == 0)
        {
            printf("INEXISTENTE\n");
        }
        
        return;
    }
    else
    {
        if (a % n == 0)
        {
            printf("%d\n", a);
            contador++;
        }
        a++;
        return multiplos(n, a, b, contador);
    }
}
int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    multiplos(n, a, b, 0);
    return 0;
}
