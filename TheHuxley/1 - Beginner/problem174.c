#include <stdio.h>
int main(){
    int n, conta, diferenca;
    scanf("%d", &n);
    if (n <= 10)
    {
        conta = 7;
    } 
    else if (n <= 30)
    {
        diferenca = n - 10;
        conta = 7 + (diferenca * 1); 
    }
    else if (n <= 100)
    {
        diferenca = n - 30;
        conta = 27 + (diferenca * 2);
    }
    else
    {
        diferenca = n - 100;
        conta = 167 + (diferenca * 5);
    }
    
    printf("%d\n", conta);
    
    return 0;
}
