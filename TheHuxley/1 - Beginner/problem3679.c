#include <stdio.h>
void inverso(){
    int n;
    scanf("%d", &n);
    if (n != 0)
    {
        inverso();
        printf("%d\n", n);
    }
    
}
int main(){
    inverso();
    return 0;
}
