#include <stdio.h>
int main(){
    int numero, horas;
    double trabalho, total;
    scanf("%d\n %d\n %lf", &numero, &horas, &trabalho);
    total = horas * trabalho;
    printf("NUMBER = %d\nSALARY = R$ %.2lf\n", numero, total);
    return 0;
}
