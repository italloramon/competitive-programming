#include <stdio.h>
void multas(int n, double total, int contador){
    scanf("%d", &n);
    if (n == 999){
        printf("%.2lf\n%d\n", total, contador);
        return;
    }
    if (n > 2)
    {
        total += (n - 2) * 12.89;
        contador += 1;
    }
    multas(n, total, contador);
}
int main(){
    multas(0, 0, 0);
    return 0;
}
