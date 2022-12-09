#include <stdio.h>
void ler_array(int n, int array[]){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}
void ler_jogada(int jogadores, int rodadas, int jogadas[]){
    int i = jogadores * rodadas, c=0;
    while (c<i)
    {
        scanf("%d", &jogadas[c]);
        c++;
    }
}
int verificarPosicao(int tabuleiro[], int posicao,  int n){
    if (posicao >= n)
    {
        posicao = posicao % n;
    }
    else if (posicao < 0)
    {
        posicao = posicao % n;
    }
    return posicao;
}
void jogo(int tabuleiro[], int jogadas[], int n, int m, int o, int c, int ultimaPosicao){
    int novaPosicao;
    for (int i = c; i < m*o; i+=m)
    {
        int v = jogadas[i];
        int novaPosicao = v + ultimaPosicao;
        novaPosicao = verificarPosicao(tabuleiro, novaPosicao, n);
        if (tabuleiro[novaPosicao] > 0)
        {
            novaPosicao += tabuleiro[novaPosicao];
            novaPosicao = verificarPosicao(tabuleiro, novaPosicao, n);
        }
        else if (tabuleiro[novaPosicao] < 0)
        {
            //printf("Tabuleiro: %d\n", tabuleiro[novaPosicao]);
            novaPosicao += tabuleiro[novaPosicao];
            //printf("Primeiro nova posicao: %d\n", novaPosicao);
            novaPosicao = verificarPosicao(tabuleiro, novaPosicao, n);
            if (novaPosicao != 0 && novaPosicao <0)
            {
                novaPosicao += n;
            }
            //printf("Ultima nova posicao: %d\n", novaPosicao);
        }
        ultimaPosicao = novaPosicao;
        //printf("%d ", ultimaPosicao);
    }
    printf("%d\n", ultimaPosicao);
}
void chamando_jogo(int tabuleiro[], int jogadas[], int n, int m, int o, int c, int ultimaPosicao){
    for (int i = 0; i < m; i++)
    {
        jogo(tabuleiro, jogadas, n, m, o, i, 0);
        //printf("Acabu\n");
    }
}
int main(){
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);
    int tabuleiro[n], jogadas[m*o];
    ler_array(n, tabuleiro);
    ler_jogada(m, o, jogadas);
    chamando_jogo(tabuleiro, jogadas, n, m, o, 0, 0);
    return 0;
}
