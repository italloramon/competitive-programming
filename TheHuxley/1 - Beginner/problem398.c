#include <stdio.h>
void multiplos(int contador, int a, int b, int v){
    if (contador == 50)
    {
        printf("%d\n", v);
        return;
    }
    if (contador % a == 0 && contador % b == 0)
    {
        v += 1;
    }
    multiplos(contador+=1, a, b, v);

}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    multiplos(1, a, b, 0);
    return 0;
}
