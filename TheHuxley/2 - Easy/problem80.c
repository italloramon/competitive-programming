#include <stdio.h>
void ler_matriz_int(int p, int matriz[p][2]){
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void ler_matriz_float(int p, double matriz[p][2]){
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }
}
void varrer_matrizes(int meses[][2], double valores[][2], double resultado[][2], int m){
    double ajuda;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            ajuda += meses[i][m] * valores[m][j];
            resultado[i][j] = ajuda;
            ajuda = 0;
        }
    }
}
void imprimir_resultado(int m, double resultado[][2]){
    for (int i = 0; i < 12; i++)
    {   
        printf("Motor[%d], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", m, i+1, resultado[i][0], resultado[i][1]);
    }
}
void total_anual(int m, double resultado[][2]){
    double total_custo = 0, total_lucro = 0;
    for (int i = 0; i < 12; i++)
    {
        total_custo += resultado[i][0];
    }
    for (int i = 0; i < 12; i++)
    {
        total_lucro += resultado[i][1];
    }
    printf("Motor[%d], anual, custo=[%.2lf], lucro=[%.2lf]\n", m, total_custo, total_lucro);
}
int main(){
    int meses[12][2];
    double valores[2][2], resultado_m0[12][2], resultado_m1[12][2];
    ler_matriz_int(12, meses);
    ler_matriz_float(2, valores);
    varrer_matrizes(meses, valores, resultado_m0, 0);
    imprimir_resultado(0, resultado_m0);
    varrer_matrizes(meses, valores, resultado_m1, 1);
    imprimir_resultado(1, resultado_m1);
    total_anual(0, resultado_m0);
    total_anual(1, resultado_m1);
    return 0;
}

