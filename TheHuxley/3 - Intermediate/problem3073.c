#include <stdio.h>
typedef struct 
{
    int id;
    int xp;
    int vida;
    int dano;
}MONSTROS;

typedef struct
{
    int vida;
    int dano;
    int experiencia;
}JOGADOR;

void ler_mapa(int l, int c, int mapa[][c]){
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mapa[i][j]);
        }
    }
}
int duelo(int vida, int dano, int vida_inimigo, int dano_inimigo){
    int c=1;
    while(c>0)
    {
        vida_inimigo -= dano;
        if (vida_inimigo > 0)
        {
            vida -= dano_inimigo;;
        }
        else return 1;
        if (vida > 0)
        {
            c++;
        }
        else return -1;
    }
}
int encontrar_monstro(MONSTROS monstro[], int t, int m){
    for (int i = 0; i < t; i++)
    {
        if (monstro[i].id == m)
        {
            return i;
        }
    }
}
int main(){
    //LER VALORES
    int t;
    scanf("%d", &t);
    MONSTROS monstro[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &monstro[i].id, &monstro[i].xp, &monstro[i].vida, &monstro[i].dano);
    }
    int l, c;
    scanf("%d %d", &l, &c);
    int mapa[l][c];
    ler_mapa(l, c, mapa);
    JOGADOR ansa;
    scanf("%d %d", &ansa.vida, &ansa.dano);
    int x, y;
    scanf("%d %d", &x, &y);
    int k;
    scanf("%d", &k);
    int movimentos[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &movimentos[i]);
    }

    //COMBATE
    ansa.experiencia = 0;
    int contador=0;
    for (int i = 0; i < k; i++)
    {
        if (movimentos[i] == 1)
        {
            x--;
            if (x < 0) x=l-1; 

            if (mapa[x][y] == -1) continue;
            else
            {
                int n = encontrar_monstro(monstro, t, mapa[x][y]);
                int possoVencer = duelo(ansa.vida, ansa.dano, monstro[n].vida, monstro[n].dano);
                if (possoVencer == 1)
                {
                    ansa.experiencia += monstro[n].xp;
                    contador++;
                }
                else continue;
            }
        }
        else if (movimentos[i] == 2)
        {
            y++;
            if (y>c-1) y=0;

            if (mapa[x][y] == -1) continue;
            else
            {
                int n = encontrar_monstro(monstro, t, mapa[x][y]);
                int possoVencer = duelo(ansa.vida, ansa.dano, monstro[n].vida, monstro[n].dano);
                if (possoVencer == 1)
                {
                    ansa.experiencia += monstro[n].xp;
                    contador++;
                }
                else continue;
            }
        }
        else if (movimentos[i] == 3)
        {
            x++;
            if (x>l-1) x=0;

            if (mapa[x][y] == -1) continue;
            else
            {
                int n = encontrar_monstro(monstro, t, mapa[x][y]);
                int possoVencer = duelo(ansa.vida, ansa.dano, monstro[n].vida, monstro[n].dano);
                if (possoVencer == 1)
                {
                    ansa.experiencia += monstro[n].xp;
                    contador++;
                }
                else continue;
            }
        }
        else if (movimentos[i] == 4)
        {
            y--;
            if (y<0) y=c-1;

            if (mapa[x][y] == -1) continue;
            else
            {
                int n = encontrar_monstro(monstro, t, mapa[x][y]);
                int possoVencer = duelo(ansa.vida, ansa.dano, monstro[n].vida, monstro[n].dano);
                if (possoVencer == 1)
                {
                    ansa.experiencia += monstro[n].xp;
                    contador++;
                }
                else continue;
            }
        }
    }
    printf("ansa derrotou: %d monstros\n", contador);
    printf("ansa conseguiu: %d de experiencia\n", ansa.experiencia);
    printf("posicao final: (%d, %d)\n", x, y);
    return 0;
}
