#include <stdio.h>
int main(){
    int genero, idade;
    scanf("%d\n %d", &genero, &idade);
    if (genero == 0 && idade == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
