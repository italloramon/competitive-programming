#include <stdio.h>
#define LIN 100
#define COL 2
void ler_matriz(double matriz[][COL], int c[]){
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            double temp;
            scanf("%lf", &temp);
            if (temp != -1)
            {
                matriz[i][j] = temp;
                c[0]++;
                
            }
            else return;
        }
    }
}
void operacoes(double matriz[][COL], int c[], double total_creditos[], double total_debitos[]){
    for (int i = 0; i < (c[0]/2); i++)
    {
        int verificador = 0;
        for (int j = 0; j < COL; j++)
        {
            if (matriz[i][j] == 1 && j == 0)
            {
                verificador++;
            }
            if (verificador == 1 && j == 1)
            {
                total_creditos[0] += matriz[i][j];
            }

            if (matriz[i][j] == 0 && j == 0)
            {
                verificador += 2;
            }
            if (verificador == 2 && j ==1)
            {
                total_debitos[0] += matriz[i][j];
            }
        }
    }
}
int main(){
    double matriz[LIN][COL], total_creditos[1]={0}, total_debitos[1]={0};
    int c[1] = {0};
    ler_matriz(matriz, c);
    operacoes(matriz, c, total_creditos, total_debitos);
    printf("Creditos: R$ %.2lf\n", total_creditos[0]);
    printf("Debitos: R$ %.2lf\n", total_debitos[0]);
    printf("Saldo: R$ %.2lf\n", total_creditos[0] - total_debitos[0]);
    return 0;
}
