#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int days, km;
    scanf("%d %d", &days, &km);
    double total = (days * 30 + (km * 0.01)) * 0.9;
    printf("%.2f\n", total);
	return 0;
}
