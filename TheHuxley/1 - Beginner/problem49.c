#include <stdio.h>
int main(){
    double a, b, c;
    scanf("%lf\n %lf\n %lf", &a, &b, &c);
    if (a == b && b ==c)
    {
        printf("equilatero\n");
    }
    else if (a != b && b != c && a != c)
    {
        printf("escaleno\n");
    }
    else
    {
        printf("isosceles\n");
    }
    
    return 0;
}
