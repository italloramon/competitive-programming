#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minusculo(char s1[]){
    int i=0;
    while (s1[i] != '\0')
    {
        s1[i] = tolower(s1[i]);
        i++;
    }
}
int main(){
    int n, c=0;
    scanf("%d\n", &n);
    char frase[256], frase_nospace[256];
    while (c<n)
    {
        scanf(" %[^\n]", frase);
        minusculo(frase);
        int j=0;
        for (int i = 0; i < 256; i++)
        {
            if (frase[i] != ' ')
            {
                frase_nospace[j] = frase[i];
                j++;
            }
        }

        int tam = strlen(frase_nospace);
        int flag=0;
        for(int i=0;i < tam ;i++)
        {
            if(frase_nospace[i] != frase_nospace[tam-i-1])
            {
                flag = 1;
                break;
            }
        }
        if (flag==0) printf("SIM\n");
        else printf("NAO\n");
        c++;
    }
    return 0;
}
