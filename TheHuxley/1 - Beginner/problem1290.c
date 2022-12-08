#include <stdio.h>
int rickception(int n, int t, int posicao){
    if (t == 0)
    {
        return n;
    }
    if (posicao % 2 == 0)
    {
        n += n % 5;
    }
    else
    {
        n += 3;
    }
    return rickception(n, t-1, posicao + 1);
}
int main(){
    int n, t, posicao = 1;
    scanf("%d %d", &n, &t);
    printf("%d\n", rickception(n, t, posicao));
    return 0;
}
