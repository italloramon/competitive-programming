#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d\n %d\n %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("*\n");
    }
    else if (a == b)
    {
        printf("C\n");
    }
    else if (b == c)
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }
    
    return 0;
}
