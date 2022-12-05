#include <stdio.h>

int euclides(int a, int d){
    if (d == 0)
    {
        return a;
    }
    return euclides(d, a%d);
}

void scan(int c){
    int a, d;
    if (c != 0)
    {
        scanf("%d %d", &a, &d);
        printf("MDC(%d,%d) = %d\n", a, d, euclides(a, d));
        scan(c - 1);
    }
}
int main(){
    int c;
    scanf("%d", &c);
    scan(c);
    return 0;
}
