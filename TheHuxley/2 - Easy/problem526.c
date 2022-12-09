#include <stdio.h>
#include <string.h>
int main(){
    char n1[2000], n2[2000], soma[2000];
    int tam_n1, tam_n2, tam_soma;
    scanf(" %s", &n1);
    scanf(" %s", &n2);
    tam_n1 = strlen(n1);
    tam_n2 = strlen(n2);

    tam_soma = (tam_n1 > tam_n2 ? tam_n1+1 : tam_n2+1);
    soma[tam_soma] = '\0';
    int nj, nk, s, help=0;
    int j = tam_n1-1;
    int k = tam_n2-1;
    for (int i = tam_soma-1; i >= 0; i--)
    {
        if (j >= 0)
        {
            nj = n1[j] - '0';
        }
        else nj=0;

        if (k >=0)
        {
            nk = n2[k] - '0';
        }
        else nk=0;

        s = nj + nk + help;
        soma[i] = s % 10 + '0';
        help = s/10;
        j--;
        k--;
    }
    if(soma[0] == '0'){
        for(int i=0; i <= tam_soma; i++)
        { 
            soma[i] = soma[i+1];
        }
    }
    printf("%s\n", soma);
    return 0;
}
