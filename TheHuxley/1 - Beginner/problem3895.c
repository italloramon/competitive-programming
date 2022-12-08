#include <stdio.h>
int main(){
    double salario, fixo, p_km, d_km, tarifa, disponivel;
    int fds;
    scanf("%lf %lf %lf %lf %d", &salario, &fixo, &p_km, &d_km, &fds);
    tarifa = fixo + p_km *  d_km;
    disponivel = salario * 0.3;
    if (fds == 1)
    {
        tarifa *= 1.10;
    }
    if (disponivel < tarifa)
    {
        printf("N�o vai poder viajar.\n");
        printf("%.2lf\n", tarifa - disponivel);
    }
    else
    {
        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifa);
        printf("%.2lf\n", disponivel - tarifa);
    }
    
    return 0;
}
