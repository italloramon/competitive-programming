#include <stdio.h>
int main(){
    int i, total=0;
    for (i = 0; i < 5; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 3 == 0)
        {
            int fatorial = 1;
            for (; n > 1; n--)
            {
                fatorial *= n;
            }
            total += fatorial;
        }
    }
    printf("%d\n", total);
    return 0;
}
