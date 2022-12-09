#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while (n >= 1000 && n <= 9999)
    {
        int primeiro_segundo = n / 100;
        int terceiro_quarto = n % 100;
        int v = primeiro_segundo + terceiro_quarto;
        if (v * v == n)
        {
            printf("propriedade do 3025!\n");
        }
        else
        {
            printf("numero comum\n");
        }
        scanf("%d", &n);
    }
    return 0;
}
