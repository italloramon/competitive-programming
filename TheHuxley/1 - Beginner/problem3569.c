#include <stdio.h>

int main(){
    int x, y;
    double z;
    scanf("%d %d", &x, &y);
    z = 180 - (x + y);
    printf("3o angulo=%.6lf\n", z);
    return 0;
}
