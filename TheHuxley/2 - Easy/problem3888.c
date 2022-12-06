#include <stdio.h>
#include <math.h>

int verificacao(double n_a, double n_p, double n_t, double n_w){
    if(n_a <= 0 || n_a >= 100 || n_p <= 0 || n_p >= 100 || n_t <= 0 || n_t >= 100 || n_w <= 0 || n_w >= 100 || n_a == n_p || n_a == n_t || n_a == n_w || n_p == n_t || n_p == n_w || n_t == n_w)
    {
        printf("N�meros inv�lidos!\n");
        printf("Pr�xima rodada.\n");
        return 1;
    }
}

double campeao(double n_a, double n_p, double n_t, double n_w, double media){
    double camp = fabs(n_a - media);
    double vencedor = n_a;
    if (fabs(n_p - media) < camp)
    {
        camp = fabs(n_p - media);
        vencedor = n_p;
    }
    if (fabs(n_t - media) < camp)
    {
        camp = fabs(n_t - media);
        vencedor = n_t;
    }
    if (fabs(n_w - media) < camp)
    {
        camp = fabs(n_w - media);
        vencedor = n_w;
    }
    return vencedor;
}

double pontuacao(int pontuacaoJogador){
    double pontuacao;
    if (pontuacaoJogador >= 0 && pontuacaoJogador <=20)
    {
        pontuacao = 10 + 0.2 * pontuacaoJogador;
    }
    else if (pontuacaoJogador > 20 && pontuacaoJogador <= 40)
    {
        pontuacao = 10 + 0.4 * pontuacaoJogador;
    }
    else if (pontuacaoJogador > 40 && pontuacaoJogador <= 60)
    {
        pontuacao = 10 + 0.6 * pontuacaoJogador;
    }
    else if (pontuacaoJogador > 60 && pontuacaoJogador <= 80)
    {
        pontuacao = 10 + 0.8 * pontuacaoJogador;
    }
    else if (pontuacaoJogador > 80)
    {
        pontuacao = 10 + 1 * pontuacaoJogador;
    }
    return pontuacao;
}

int main(){
    int pt_a, pt_p, pt_t, pt_w;
    double n_a, n_p, n_t, n_w;
    char ch;
    double regularidade, media, champion;
    double d_a, d_p, d_t, d_w;
    int contador = 0;
    scanf("%d %d %d %d %lf %lf %lf %lf %c", &pt_a, &pt_p, &pt_t, &pt_w, &n_a, &n_p, &n_t, &n_w, &ch);
    media = (n_a + n_p + n_t + n_w) / 4;
    d_a = fabs(n_a - media);
    d_p = fabs(n_p - media);
    d_t = fabs(n_t - media);
    d_w = fabs(n_w - media);
    regularidade = sqrt(pow(n_a - media, 2) + pow(n_p - media, 2) + pow(n_t - media, 2) + pow(n_w - media, 2));
    champion = campeao(n_a, n_p, n_t, n_w, media);
    if(verificacao(n_a, n_p, n_t, n_w) == 1)
    {
        return 0;
    }
    else
    {
        if (d_a == d_p || d_a == d_t || d_a == d_w || d_p == d_t || d_p == d_w || d_t == d_w)
        {
            printf("N�o foi poss�vel determinar um vencedor :/\n");
            printf("Pr�xima rodada.\n");
        }
        else
        {
            if (champion == n_a)
            {
                /* Athur ganhou */
                if (ch == 'a')
                {
                    /* GANHOU A RODADA PASSADA */
                    printf("Arthur venceu outra vez!\n");
                    printf("Pontua��o: +%.2lf\n", pontuacao(pt_a));
                }
                else
                {
                    /* PRIMEIRA RODADA GANHANDO */
                    printf("Arthur venceu!\n");
                    printf("Pontua��o: +10\n");
                } 
            }
            else if (champion == n_p)
            {
                /* Pedro ganhou */
                if (ch == 'p')
                {
                    /* GANHOU A RODADA PASSADA */
                    printf("Pedro venceu outra vez!\n");
                    printf("Pontua��o: +%.2lf\n", pontuacao(pt_p));
                }
                else
                {
                    /* PRIMEIRA RODADA GANHANDO */
                    printf("Pedro venceu!\n");
                    printf("Pontua��o: +10\n");
                }
                
            }
            else if (champion == n_t)
            {
                /* T�lio ganhou */
                if (ch == 't')
                {
                    /* GANHOU A RODADA PASSADA */
                    printf("T�lio venceu outra vez!\n");
                    printf("Pontua��o: +%.2lf\n", pontuacao(pt_t));
                }
                else
                {
                    /* PRIMEIRA RODADA GANHNADO */
                    printf("T�lio venceu!\n");
                    printf("Pontua��o: +10\n");
                }
                
            }
            else if (champion == n_w)
            {
                /* Will ganhou */
                if (ch == 'w')
                {
                    /* GANHOU A RODADA PASSADA */
                    printf("Will venceu outra vez!\n");
                    printf("Pontua��o: +%.2lf\n", pontuacao(pt_w));
                }
                else
                {
                    /* PRIMEIRA RODADA GANHANDO */
                    printf("Will venceu!\n");
                    printf("Pontua��o: +10\n");
                }   
            }
            if (regularidade <= 10)
            {
                printf("Houve regularidade na rodada!\n");
                printf("Todos ganharam +10 pontos\n");
            }
        } 
    }
    return 0;
}
