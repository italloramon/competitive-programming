#include <stdio.h>
#include <math.h>
void calculo(int n, int posicao, int contador, int denominador_par, int denominador_impar, int c_impar, double total){
    if(contador > n)
    {
        printf("S: %.2lf\n", total+1);
        return;
    }
    if (posicao % 2 == 0)
    {
        double numerador;
        numerador = pow(2, posicao-1);
        denominador_par += 3;
        total += numerador / denominador_par;
    }
    else
    {
        double numerador;
        c_impar += 1;
        numerador = posicao;
        denominador_impar = pow(4, c_impar);
        total += numerador / denominador_impar;
    }
    return calculo(n, posicao+=1, contador+=1, denominador_par, denominador_impar, c_impar, total);
}
int main(){
    int n;
    scanf("%d", &n);
    calculo(n, 2, 2, 0, 0, 0, 0);
}
