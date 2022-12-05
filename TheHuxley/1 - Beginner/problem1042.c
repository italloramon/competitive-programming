#include <stdio.h>
int main(){
    int n;
    double total;
    scanf("%d", &n);
    total = n * 31536000;
    printf("%.0lf\n", total);
    return 0;
}
