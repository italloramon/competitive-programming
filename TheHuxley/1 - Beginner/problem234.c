#include <stdio.h>
int main(){
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for (i = n1+1; i < n2; i++)
    {
        if (i % 5 == 3 || i % 5 == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
