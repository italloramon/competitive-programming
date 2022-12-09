#include <stdio.h>
void ler_hora(int hora[], int i, int n){
    if (i == n)
    {
        return;
    }
    scanf("%d\n", &hora[i]);
    ler_hora(hora, i+1, n);
}
void calculo(int hora_marcada[], int hora_chegada[], int i, int n, int l, int f, int total){
    if (i == n)
    {
        printf("%d", total);
        return;
    }
    if ((hora_chegada[i] - hora_marcada[i]) > 0)
    {
        f += hora_chegada[i] - hora_marcada[i];
    }
    if (f >= l)
    {
        total += f;
        f = 0;
    }
    calculo(hora_marcada, hora_chegada, i+1, n, l, f, total);
}
int main(){
    int n, l;
    scanf("%d %d", &n, &l);
    int hora_marcada[n], hora_chegada[n];
    ler_hora(hora_marcada, 0, n);
    ler_hora(hora_chegada, 0, n);
    calculo(hora_marcada, hora_chegada, 0, n, l, 0, 0);
    return 0;
}
