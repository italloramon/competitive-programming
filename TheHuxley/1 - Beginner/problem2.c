#include <stdio.h>
int main(){
    int n1, n2, n3, maior, menor, meio;
    scanf("%d %d %d", &n1, &n2, &n3);
    maior = n1;
    meio = n2;
    menor = n3;
    if (n2 > maior && n1 >= n3) 
    {
        maior = n2;
        meio = n1;
        menor = n3;
    }
    if (n2 > maior && n1 < n3)
    {
        maior = n2 ;
        meio = n3;
        menor = n1;
    }
    if (n3 > maior && n1 >= n2)
    {
        maior = n3;
        meio = n1;
        menor = n2;
    }
    if (n3 > maior && n1 < n2)
    {
        maior = n3;
        meio = n2;
        menor = n1;
    }
    if (maior == n1)
    {
        if (n2 < n3)
        {
            meio = n3;
            menor = n2;
        }
        
    }
    
    printf("%d\n%d\n%d\n", menor, meio, maior);
    return 0;
}
