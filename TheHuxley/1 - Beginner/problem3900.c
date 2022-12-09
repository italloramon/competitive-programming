#include <stdio.h>
void robo(int n, int contador){
    if (n == 0)
    {
        printf("\n");
        return;
    }
    int temp = n % 10;
    if (temp % 2 == 0)
    {
        printf(".");
    }
    else
    {
        printf("-");
    }
    return robo(n/10, contador+1);
}
void repetir(int contador){
    if (contador == 10)
    {
        return;
    }
    int n;
    scanf("%d", &n);
    robo(n, 0);
    return repetir(contador+1);
}
int main(){
    int n;
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    scanf("%d", &n);
    robo(n,  0);
    
}
