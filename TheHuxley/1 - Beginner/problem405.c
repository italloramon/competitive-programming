#include <stdio.h>
int digitosPares(int n, int total){
    if (n == 0)
    {
        return total;
    }

    int temp = n % 10;
    if (temp % 2 == 0)
    {
        total++;
    }
    
    return digitosPares(n/10, total);
     
}
int main(){
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("1\n");
    }
    
    printf("%d\n", digitosPares(n, 0));
    return 0;
    
}
