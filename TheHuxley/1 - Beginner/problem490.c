#include <stdio.h>
int main(){
    double arvore, e1, v1, e2, v2, e3, v3, total, divisao;
    scanf("%lf %lf %lf %lf %lf %lf %lf", &arvore, &e1, &v1, &e2, &v2, &e3, &v3);
    total = arvore + (e1 * v1) + (e2 * v2) + (e3 * v3);
    divisao = total / 21;
    printf("%.2lf\n%.2lf\n", total, divisao);
    return 0;
}
