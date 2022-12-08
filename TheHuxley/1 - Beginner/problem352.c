#include <stdio.h>
int mdc(int n1, int n2){
    int r = n1 % n2;
    if (r == 0)
    {
        return n2;
    }
    return mdc(n2, r);
    
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", mdc(a, b));
    return 0;
}
