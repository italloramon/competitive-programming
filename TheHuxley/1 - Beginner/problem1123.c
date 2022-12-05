#include <stdio.h>
int main(){
    double q_passadas, q_resolvidas, p_resolvida;
    scanf("%lf %lf", &q_passadas, &q_resolvidas);
    p_resolvida = (q_resolvidas * 100) / q_passadas; 
    
    if (p_resolvida < 20)
    {
        printf("%.2lf%% 4.40%% Pessimo\n", p_resolvida);
    }
    else if (p_resolvida < 40)
    {
        printf("%.2lf%% 31.65%% Ruim\n", p_resolvida);
    }
    else if (p_resolvida < 60)
    {
        printf("%.2lf%% 56.82%% Bom\n", p_resolvida);
    }
    else if (p_resolvida < 80)
    {
        printf("%.2lf%% 80.00%% Muito Bom\n", p_resolvida);
    }
    else if (p_resolvida <= 100)
    {
        printf("%.2lf%% 94.00%% Excelente\n", p_resolvida);
    }
    
    return 0;
}
