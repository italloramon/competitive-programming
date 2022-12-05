#include <stdio.h>
int main(){
    double v_max, velocidade, multa;
    int carteira;
    scanf("%lf\n %lf", &v_max, &velocidade);

    if(velocidade > v_max)
    {
        if(velocidade <= (v_max + (v_max * 0.2) ))
        {
            multa = 85.13;
            carteira = 4;
        } 
        else if (velocidade <= (v_max * 1.5))
        {
            multa = 127.69;
            carteira = 5;
        } 
        else
        {
            multa = 574.62;
            carteira = 7;
        }
        
    }
    else
    {
        multa = 0;
        carteira = 0;
    }
    printf("%.2lf\n%d\n", multa, carteira);
    return 0;
}
