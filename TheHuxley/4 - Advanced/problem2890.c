#include <stdio.h>

typedef struct
{
    int atk;
    int life;
    int jump;
}JOGADOR;

void ler_tabuleiro(int n, JOGADOR jogadores[][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d %d %d", &jogadores[i][j].atk, &jogadores[i][j].life, &jogadores[i][j].jump);
        }
    }
}

void duelo(int r, int n, JOGADOR sofia[][n], JOGADOR ambrosio[][n]){
    int c = 0;
    int ia = 0;
    int ja = 0;
    int is = 0;
    int js = 0;
    while (c < r)
    {
        int flag = 0;
        int cs = 0;
        int ca = 0;
        int bc_sofia = sofia[is][js].life;
        int bc_ambrosio = ambrosio[ia][ja].life;
        while (flag == 0)
        {
            //printf("Ambrosio[%d][%d]: %d %d Sofia[%d][%d]: %d %d\n", ia, ja, ambrosio[ia][ja].atk, ambrosio[ia][ja].life, is, js, sofia[is][js].atk, sofia[is][js].life);
            //Sofia ataca
            ambrosio[ia][ja].life -= sofia[is][js].atk;
            //Se ambrosio tiver vida, ataca de volta
            if (ambrosio[ia][ja].life > 0)
            {
                sofia[is][js].life -= ambrosio[ia][ja].atk;
                //Se sofia tiver perdido ent�o ambrosio anda as casas e sofia reseta sua vida
                if (sofia[is][js].life <= 0)
                {
                    int jump = ambrosio[ia][ja].jump;
                    int flag_ajuda = 0;
                    for ( ; ia < n; ia++)
                    {
                        for ( ; ja < n; )
                        {
                            //printf("Ia: %d Ja: %d Jump: %d Ca: %d\n", ia, ja, jump, ca);
                            if (ca == jump)
                            {
                                flag_ajuda++;
                                break;
                            }
                            ja++;
                            ca++;
                        }
                        if (flag_ajuda == 1) break;
                        ja = 0;
                    }
                sofia[is][js].life = bc_sofia;
                flag++;
                }
            }
            //Se ambrosio j� tiver perido sofia anda casas e ambrosio reseta sua vida
            else
            {
                int jump = sofia[is][js].jump;
                int flag_ajuda = 0;
                for ( ; is < n; is++)
                {
                    for ( ; js < n; )
                    {
                        //printf("Is: %d Js: %d Jump: %d Cs: %d\n", is, js, jump, cs);
                        if (cs == jump)
                        {
                            flag_ajuda++;
                            break;
                        }
                        js++;
                        cs++;
                    }
                    if (flag_ajuda == 1) break;
                    js = 0;
                }
                ambrosio[ia][ja].life = bc_ambrosio;
                flag++;
            }
        }
        //Checar se tem algum vencendor
        //printf("IS:%d JS%d\n", is, js);
        if (is >= n || (is >= n-1 && js >= n-1))
        {
           is=n-1;
           js=n-1;
           printf("Sofia: (%d, %d)\n", is, js);
           printf("Ambrosio: (%d, %d)\n", ia, ja);
           printf("Sofia venceu\n");
           return;
        } 
        if (ia >= n || (ia >= n-1 && ja >= n-1))
        {
           ia=n-1;
           ja=n-1;
           printf("Sofia: (%d, %d)\n", is, js);
           printf("Ambrosio: (%d, %d)\n", ia, ja);
           printf("Ambrosio venceu\n");
           return;  
        }
        c++;
    }
    if (js >= n) js=n-1;
    if (ja >= n) ja=n-1;
    printf("Sofia: (%d, %d)\n", is, js);
    printf("Ambrosio: (%d, %d)\n", ia, ja);
    printf("Ninguem venceu\n");
}

int main(){
    int n;
    scanf("%d", &n);
    JOGADOR sofia[n][n];
    JOGADOR ambrosio[n][n];
    ler_tabuleiro(n, sofia);
    ler_tabuleiro(n, ambrosio);
    int r;
    scanf("%d", &r);
    duelo(r, n, sofia, ambrosio);
    return 0;
}
