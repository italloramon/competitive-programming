#include <stdio.h>

double fatorial(double n){
    if (n <= 1)
    {
        return 1;
    }

    return n * fatorial(n -1);
}

void scan(int n){
    if (n != -1)
    {
        printf("%.0lf\n", fatorial(n));
        scanf("%d", &n);
        scan(n);
    }
}

int main(){
    int n;    
    scanf("%d", &n);
    scan(n);
    return 0;
}
