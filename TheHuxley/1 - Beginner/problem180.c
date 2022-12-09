#include <stdio.h>
int elevador(int s, int e, int contador, int capacidade, int n, int total, int verificador){
    total = total - s + e;
    if (total > capacidade)
    {
        verificador += 1;
    }
    if (contador == n)
    {
        return verificador;
    }
    scanf("%d", &s);
    scanf("%d", &e);
    return elevador(s, e, contador+=1, capacidade, n, total, verificador);
}
int main(){
    int s, e, contador, capacidade, n, total, verificador, v;
    scanf("%d %d", &n, &capacidade);
    scanf("%d %d", &s, &e);
    contador = 1;
    verificador = 0;
    v = elevador(s, e, contador, capacidade, n, 0, verificador);
    if (v == 0){
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    return 0;
}
