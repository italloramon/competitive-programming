#include <stdio.h>
int main(){
    double n1, n2, n3, n4;
    double maior, menor;
    double x1, x2;
    scanf("%lf\n  %lf\n %lf\n %lf", &n1, &n2, &n3, &n4);
    if ((n1 > n2) && (n1 > n3) && (n1 > n4)){
        maior = n1;
    } else if ((n2 > n1) && (n2 > n3) && (n2 > n4))
    {
        maior = n2;
    }else if ((n3 > n1) && (n3 > n2) && (n3 > n4))
    {
        maior = n3;
    }else if ((n4 > n1) && (n4 > n2) && (n4 > n3))
    {
        maior = n4;
    }

    if((n1 < n2) && (n1 < n3) && (n1 < n4)){
        menor = n1;
    }else if ((n2 < n1) && (n2 < n3) && (n2 < n4))
    {
        menor =  n2;
    }else if ((n3 < n1) && (n3 < n2) && (n3 < n4))
    {
        menor = n3;
    }else if ((n4 < n1) && (n4 < n2) && (n4 < n3))
    {
        menor = n4;
    }
    
    if((n1 > menor) && (n1 < maior)){
        x1 = n1;
    }else if ((n2 > menor) && (n2 < maior))
    {
        x1 = n2;
    }else if ((n3 > menor) && (n3 < maior))
    {
        x1 = n3;
    }else if ((n4 > menor) && (n4 < maior))
    {
        x1 = n4;
    }
    if((n1 != x1) && (n1 != menor) && (n1 != maior)){
        x2 = n1;
    }else if ((n2 != x1) && (n2 != menor) && (n2 != maior))
    {
        x2 = n2;
    }else if ((n3 != x1) && (n3 != menor) && (n3 != maior))
    {
        x2 = n3;
    }else if ((n4 != x1) && (n4 != menor) && (n4 != maior))
    {
        x2 = n4;
    }

    printf("%.2lf\n", menor);    
    if(x2 > x1){
        printf("%.2lf\n", x2);
        printf("%.2lf\n", maior);
        printf("%.2lf\n", x1);
    }else{
        printf("%.2lf\n", x1);
        printf("%.2lf\n", maior);
        printf("%.2lf\n", x2);
    }
    
    return 0;
}
