#include <stdio.h>
int main(){
    double raio, area;
    double pi = 3.14159;
    scanf("%lf", &raio);
    area = (raio * raio) * pi / 10000;
    printf("Area = %.4lf\n", area);
    return 0;
}
