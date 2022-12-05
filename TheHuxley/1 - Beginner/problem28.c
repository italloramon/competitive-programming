#include <stdio.h>
int main(){
    int n, dezena, unidade;
    scanf("%d", &n);
    dezena = n / 10;
    unidade =  n % 10;
    if (unidade > 0){
        printf("%d", unidade);
    }
    printf("%d\n", dezena);
    return 0;
}
