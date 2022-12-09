#include <stdio.h>
int calculo(int i, int c){
    if (i == 1)
    {
        return c;
    }
    if (i % 2 == 0)
    {
        i /= 2;
    }
    else
    {
        i = i * 3 + 1;
    }
    c += 1;
    return calculo(i, c);
}
int serie(int i, int j, int maior){
    if (i > j)
    {
        return maior;
    }
    int temp;
    temp = calculo(i, 1);
    if (temp > maior)
    {
        maior = temp;
    }
    return serie(i+1, j, maior);
}
void faz_tudo(){
    int i, j;
    if (scanf("%d %d", &i, &j) != EOF)
    {
        if (i > j)
        {
            int temp;
            temp = i;
            i = j;
            j = temp;
            printf("%d %d %d\n", temp, i, serie(i, j, 0));
        }
        else
        {
            printf("%d %d %d\n", i, j, serie(i, j, 0));
        }
        faz_tudo();
    }   
}
int main(){
    faz_tudo();
    return 0;
}
