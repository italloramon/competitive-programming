#include <stdio.h>
void ler_votacao(int e, int p, int matriz[][p]){
    for (int j = 0; j < p; j++)
    {
        int total_p = 0;
        for (int i = 0; i < e; i++)
        {
            if (matriz[i][j] == 1)
            {
                total_p++;
            }
            
        }
        printf("Princesa %d: %d voto(s)\n",j+1,total_p);
    }
}
int main(){
    int p, e;
    scanf("%d\n%d", &p, &e);
    int matriz[e][p];
    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    ler_votacao(e, p, matriz);
    
    return 0;
}
