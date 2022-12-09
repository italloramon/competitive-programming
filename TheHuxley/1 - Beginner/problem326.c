#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int i=1, c=0;
    while (i <= y)
    {
        if (c == x)
        {
            printf("\n");
            c = 0;
        }
        
        if (c + 1 == x)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
        c += 1;
        i += 1;
    }
    printf("\n");
    return 0;
}
