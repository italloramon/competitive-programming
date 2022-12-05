#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, delta, r1, r2;
    scanf("%lf\n %lf\n %lf", &a, &b, &c);
    delta = (b * b) - (4 * a * c);
    r1 = (- (b) + sqrt(delta)) / (2 * a);
    r2 = (- (b) - sqrt(delta)) / (2 * a);

    if(a == 0){
        printf("NEESG\n");
    }else if (delta < 0)
    {
        printf("NRR\n");
    }else{
        printf("%.2lf\n%.2lf\n", r1, r2);
    }
    
    return 0;
}
