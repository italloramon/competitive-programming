#include <stdio.h>

int ehprimo(int n, int i){
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return ehprimo(n, i-1);
        }
    }
}

void scan(int n){
    if(n != -1){
        if(n == 0 || n == 1)
        {
            printf("0\n");
        }
        
        else{
            int check = ehprimo(n, n/2);
            
            if (check == 1)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
            
        }
        scanf("%d", &n);
            scan(n);
    }
}

int main(){
    int numero;
    scanf("%d", &numero);
    scan(numero);
    return 0;
}
