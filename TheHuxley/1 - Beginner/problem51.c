#include <stdio.h>
int main(){
    int codigo;
    double total, desconto, quantidade;
    scanf("%d\n %lf", &codigo, &quantidade);
    if (codigo == 1){
        total = 5.30 * quantidade;
    } else if (codigo == 2)
    {
        total = 6 * quantidade;
    } else if (codigo == 3)
    {
        total = 3.20 * quantidade;
    } else if (codigo == 4)
    {
        total = 2.50 * quantidade;
    }
    
    desconto = total - (total * 15/100);

    if(quantidade >=15 || total >=40){
        printf("R$ %.2lf\n", desconto);
    } else{
        printf("R$ %.2lf\n", total);
    }
    
    return 0;
}
