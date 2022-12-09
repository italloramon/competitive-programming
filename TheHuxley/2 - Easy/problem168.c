#include <stdio.h>
#define LIN 3
#define COL 4
void ler_matriz(int matriz[][COL]){
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void ler_array(double array[]){
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf", &array[i]);
    }
}
void calcular(int ingredites[][COL], double preco_ingredientes[]){
    for (int i = 0; i < LIN; i++)
    {
        double total = 0;
        for (int j = 0; j < COL; j++)
        {
            total += ingredites[i][j] * preco_ingredientes[j];
        }
        printf("%.2lf\n", total);
    }
}
int main(){
    int ingredientes[LIN][COL];
    ler_matriz(ingredientes);
    double preco_ingredientes[4];
    ler_array(preco_ingredientes);
    calcular(ingredientes, preco_ingredientes);
    return 0;
}
