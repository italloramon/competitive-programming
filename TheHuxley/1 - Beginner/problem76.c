#include <stdio.h>
void ler_gabarito(char gabarito[], int i)
{
    if (i == 10)
    {
        return;
    }
    scanf("%c", &gabarito[i]);
    ler_gabarito(gabarito, i+1);
}
void frequencia(int nota[], int i, int notas[]){
    if (i > 10)
    {
        return;
    }
    if (nota[0] == i)
    {
        notas[i]++;
    }
    frequencia(nota, i+1, notas);
}
void maior_frequencia(int notas[], int i, int maior, int verificador){
    if (i > 10)
    {
        printf("%d.0\n", verificador);
        return;
    }
    if (notas[i] > maior)
    {
        maior = notas[i];
        verificador = i;
    }
    maior_frequencia(notas, i+1, maior, verificador);
}
void calcular(char gabarito[], char resposta[], int i, int j, int nota[], int notas[]){
    if (i == 10)
    {
        frequencia(nota, 0, notas);
        return;
    }
    if (gabarito[i] == resposta[j])
    {
        nota[0]++;
    }
    calcular(gabarito, resposta, i+1, j+1, nota, notas);
}
void ler_notas(char resposta[], int i, char gabarito[], int num, int aprovados[], int notas[], int nota[]){
    if (i == 11)
    {
        calcular(gabarito, resposta, 0, 1, nota, notas);
        if (nota[0] >= 6)
        {
            aprovados[0]++;
        }
        printf("%d %d.0\n", num, nota[0]); 
        return;
    }
    scanf("%c", &resposta[i]);
    ler_notas(resposta, i+1, gabarito, num, aprovados, notas, nota);
}
void ler_alunos(char gabarito[], double n_alunos, int aprovados[], int notas[], int nota[]){
    int num;
    char resposta[11];
    scanf("%d", &num);
    if (num == 9999)
    {
        printf("%.1lf%%\n", (aprovados[0] / n_alunos) * 100);
        maior_frequencia(notas, 0, notas[0], 0);
        return;
    }
    n_alunos++;
    ler_notas(resposta, 0, gabarito, num, aprovados, notas, nota);
    nota[0] = 0;
    ler_alunos(gabarito, n_alunos, aprovados, notas, nota);
}
int main(){
    char gabarito[10];
    int aprovados[1];
    aprovados[0] = 0;
    int notas[11];
    notas[10] = 0;
    notas[0] = 0;
    notas[1] = 0;
    notas[2] = 0;
    notas[3] = 0;
    notas[4] = 0;
    notas[5] = 0;
    notas[6] = 0;
    notas[7] = 0;
    notas[8] = 0;
    notas[9] = 0;
    int nota[1];
    nota[0] = 0;
    ler_gabarito(gabarito, 0);
    ler_alunos(gabarito, 0, aprovados, notas, nota);
    return 0;
}
