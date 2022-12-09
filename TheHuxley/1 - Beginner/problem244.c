#include <stdio.h>
int main(){
    char palavra[51], caracter[1];
    scanf(" %s", palavra);
    scanf(" %s", caracter);
    int c=0;
    for (int i = 0; i < 50; i++)
    {
        if (palavra[i] == caracter[0])
        {
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}
