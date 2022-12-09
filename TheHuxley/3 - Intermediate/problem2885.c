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
        if (i == 0) printf("O custo do pastel e R$ %.2lf.\n", total);
        else if (i == 1) printf("O custo da empada e R$ %.2lf.\n", total);
        else if (i == 2) printf("O custo do kibe e R$ %.2lf.\n", total);
    }
}
int main(){
    int ingredientes[LIN][COL];
    printf("Digite a quantidade de ingredientes em cada produto (ovo, farinha, acucar e carne):\n");
    ler_matriz(ingredientes);
    double preco_ingredientes[4];
    printf("Digite o preco de cada ingrediente (ovo, farinha, acucar e carne):\n");
    ler_array(preco_ingredientes);
    calcular(ingredientes, preco_ingredientes);
    return 0;
}
