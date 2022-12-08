#include <stdio.h>
int decrementa(int n){
    int quociente;
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            return 1; 
        }
        else
        {
            return 0;
        }
    }
    quociente = n / 10;
    return decrementa(quociente);
}
int main(){
    int n;
    scanf("%d", &n);
    if (decrementa(n) == 1)
    {
        printf("%d\n", n-4);
    }
    else
    {
        printf("%d\n", n-3);
    }
    
    return 0;
}
