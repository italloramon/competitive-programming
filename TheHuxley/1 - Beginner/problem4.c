#include <stdio.h>
int verificador_figurinhas(int figurinhas[], int i, int j, int verificador){
    if (j > i)
    {
        return verificador;
    }
    
    if (figurinhas[i] == figurinhas[j])
    {
        verificador+=1;
    }
    return verificador_figurinhas(figurinhas, i, j+1, verificador);
}
void ler_figurinhas(int figurinhas[], int n, int i, int qt_joao, int qt_maria, int tt_joao, int tt_maria, int v){
    if (i == n)
    {
        printf("%d\n%d\n", qt_joao, qt_maria);
        if (tt_joao > tt_maria)
        {
            printf("%d\n", tt_joao);
        }
        else
        {
            printf("%d\n", tt_maria);
        }
        
        
        return;
    }
    scanf("%d", &figurinhas[i]);
    if (figurinhas[i] % 2 == 0)
    {
        qt_joao++;
        v = verificador_figurinhas(figurinhas, i, 0, 0);
        if (v == 1)
        {
            tt_joao += figurinhas[i];
        }
        
    }
    else
    {
        qt_maria++;
        v = verificador_figurinhas(figurinhas, i, 0, 0);
        if (v == 1)
        {
            tt_maria += figurinhas[i];
        }
        
    }
    v = 0;
    ler_figurinhas(figurinhas, n, i+1, qt_joao, qt_maria, tt_joao, tt_maria, v);
}
int main(){
    int n;
    scanf("%d", &n);
    int figurinhas[n];
    ler_figurinhas(figurinhas, n, 0, 0, 0, 0, 0, 0);
    return 0;
}
