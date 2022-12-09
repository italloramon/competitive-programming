#include <stdio.h>
void ler_a(int t, int array[][t]){
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
}
void inverter(int t, int array[][t]){
    int array_invertida[t][t];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            array_invertida[j][i] = array[i][j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (array_invertida[i][j] < 0)
            {
                array_invertida[i][j] *= 2;
            }
            if (j+1==t) printf("%d", array_invertida[i][j]);
            else printf("%d ", array_invertida[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int t;
    scanf("%d", &t);
    int campo[t][t];
    ler_a(t, campo);
    inverter(t, campo);
    return 0;
}
