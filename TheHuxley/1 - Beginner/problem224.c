#include <stdio.h>
void sequencia(int maior)
{
    int atual;
    scanf("%d", &atual);
    if (atual == 0)
    {
        printf("%d\n", maior);
        return;
    }
    
    if (atual > maior)
    {
        maior = atual;
    }
    return sequencia(maior);
}
int main(){
    sequencia(0);
    return 0;
}
