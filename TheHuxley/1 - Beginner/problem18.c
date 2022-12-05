#include <stdio.h>
int main(){
    int a, b, c, menor;
    scanf("%d\n %d\n %d", &a, &b, &c);
    
    menor = a;
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }
    printf("%d\n", menor);
    return 0;
}
