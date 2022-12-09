#include <stdio.h>
int main(){
    int voto = 0; 
    int branco = 0; 
    int nulo = 0; 
    int vencedor = 0;
    double p_ali = 0;
    double p_alca = 0; 
    double votos_validos = 0;
    int alibaba = 0; 
    int alcapone = 0;
    for (; voto >= 0; )
    {
        scanf("%d", &voto);
        if  (voto == -1)
        {
            break;
        }
        if (voto == 83)
        {
            alibaba++;
            votos_validos++;
        }
        else if (voto == 93)
        {
            alcapone++;
            votos_validos++;
        }
        else if (voto == 0)
        {
            branco++;
            votos_validos++;
        }
        else
        {
            nulo++;
        }
    }
    if (alibaba > alcapone)
    {
        vencedor = 83;
    }
    else
    {
        vencedor = 93;
    }
    p_ali = (alibaba / votos_validos) *  100;
    p_alca = (alcapone / votos_validos) *  100;
    printf("%d\n%d\n%d\n%d\n%d\n%.2lf\n%.2lf\n", alibaba, alcapone, branco, nulo, vencedor, p_ali, p_alca);
    return 0;
}
