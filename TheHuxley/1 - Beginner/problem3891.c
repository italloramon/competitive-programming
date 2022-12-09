#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, m, mp1, mp2;
    scanf("%lf %lf %lf", &a, &b, &c);
    m = (a + b + c) / 3;
    mp1 = ((a * 2) + (b * 2) + (c * 3)) / 7;
    mp2 = ((a * 1) + (b * 2) + (c * 2)) / 5;
    printf("%.2lf\n%.2lf\n%.2lf\n", m, mp1, mp2);
	return 0;
}
