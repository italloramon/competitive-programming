#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[51], palavra2[51];
    scanf("%s %s", palavra1, palavra2);
    if (strcmp(palavra1, palavra2)==0)
    {
        printf("IGUAIS\n");
    }
    else printf("DIFERENTES\n");
    return 0;
}
