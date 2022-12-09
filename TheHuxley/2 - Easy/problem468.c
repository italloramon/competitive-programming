#include <stdio.h>
void desconto(double p_a, double p_n, int contador, int v){
    if (contador == 5)
    {
        printf("%d\n", v);
        return;
    }
    scanf("%lf %lf", &p_a, &p_n);
    if (p_n <= p_a - (p_a * 0.20))
    {
        v += 1;
    }
    return desconto(p_a, p_n, contador+=1, v);
}
int main(){
    desconto(0, 0, 0, 0);
    return 0;
}
