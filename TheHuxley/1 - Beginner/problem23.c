#include <stdio.h>
int main(){
    int n, m;
    int c = 0;
    scanf("%d %d", &n, &m);
    while (n <= m)
    {
        if (n % 5 == 0)
        {
            if (c == 0)
            {
                printf("%d", n);
                c++;
            }
            else
            {
               printf("|%d", n); 
            }
        }
        n++;
    }
    printf("\n");
    return 0;
}
