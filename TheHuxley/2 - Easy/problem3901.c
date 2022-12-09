#include <stdio.h>
#include <math.h>
int euclides(int a, int d){
    if (d == 0)
    {
        return a;
    }
    return euclides(d, a%d);
}
int eh_primo(int numero, int i){
    if (numero == 1 || numero == 0)
    {
        return 0;
    }
    else
    {
        if (i == 1)
        {
            return 1;
        }
        else
        {
            if (numero % i == 0)
            {
                return 0;
            }
            else
            {
                return eh_primo(numero, i-1);
            }
        }
    }
}

int batalha(int habilidade_will, int atk_will, int vida_will, int habilidade_gabriel, int atk_gabriel, int vida_gabriel, int round, int i)
{
    if (vida_will <= 0 || vida_gabriel <=0)
    {
        if (vida_will <= 0)
        {
            return 0;
        }
        else if (vida_gabriel <= 0)
        {
            return 1;
        }
        
    }
    if (i == 1)
    {
        /* WILL ATK PRIMEIRO */
        if (habilidade_will == 1)
        {
            // ATK 2 vezes
            int eh_round;
            eh_round = eh_primo(round, sqrt(round));
            if (eh_round == 1)
            {
                vida_gabriel -= atk_will;
                vida_gabriel -= atk_will;
            }
            else
            {
                vida_gabriel -= atk_will;
            }
        }
        else if (habilidade_will == 2)
        {
            // Se a vida for coprimo da vida inimiga, aumenta o ataque em 25.
            int coprimo;
            coprimo = euclides(vida_will, vida_gabriel);
            if (coprimo == 1)
            {
                atk_will += 25;
                vida_gabriel -= atk_will;
            }
            else
            {
                vida_gabriel -= atk_will;
            }
        }
        else if (habilidade_will == 3)
        {
            // Se a vida ou ataque for um n�mero primo, aumenta o ataque em 10.
            int eh_vida;
            int eh_atk;
            eh_vida = eh_primo(vida_will, sqrt(vida_will));
            eh_atk = eh_primo(atk_will, sqrt(atk_will));
            if (eh_vida == 1 || eh_atk == 1)
            {
                atk_will += 10;
                vida_gabriel -= atk_will;
            }
            else
            {
                vida_gabriel -= atk_will;
            }
        }
        if (vida_gabriel > 0)
        {
            // GABRIEL ATK DE VOLTA
            if (habilidade_gabriel == 1)
            {
                // ATK 2 vezes
                int eh_round = eh_primo(round, sqrt(round));
                if (eh_round == 1)
                {
                    vida_will -= atk_gabriel;
                    vida_will -= atk_gabriel;
                }
                else
                {
                    vida_will -= atk_gabriel;
                }
            }
            else if (habilidade_gabriel == 2)
            {
                // Se a vida for coprimo da vida inimiga, aumenta o ataque em 25.
                int coprimo;
                coprimo = euclides(vida_will, vida_gabriel);
                if (coprimo == 1)
                {
                    atk_gabriel += 25;
                    vida_will -= atk_gabriel;
                }
                else
                {
                    vida_will -= atk_gabriel;
                }
            }
            else if (habilidade_gabriel == 3)
            {
                // Se a vida ou ataque for um n�mero primo, aumenta o ataque em 10.
                int eh_vida;
                int eh_atk;
                eh_vida = eh_primo(vida_gabriel, sqrt(vida_gabriel));
                eh_atk = eh_primo(atk_gabriel, sqrt(atk_gabriel));
                if (eh_vida == 1 || eh_atk == 1)
                {
                    atk_gabriel += 10;
                    vida_will -= atk_gabriel;
                }
                else
                {
                    vida_will -= atk_gabriel;
                }
            }
        }
        else if (vida_gabriel <= 0)
        {
            //GABRIEL PERDEU
            return 1;
        }
    }
    else if (i == 2)
    {
        /* GABRIEL ATK PRIMEIRO */
        if (habilidade_gabriel == 1)
        {
            // ATK 2 vezes
            int eh_round = eh_primo(round, sqrt(round));
            if (eh_round == 1)
            {
                vida_will -= atk_gabriel;
                vida_will -= atk_gabriel;
            }
            else
            {
                vida_will -= atk_gabriel;                
            }
        }
        else if (habilidade_gabriel == 2)
        {
            // Se a vida for coprimo da vida inimiga, aumenta o ataque em 25.
            int coprimo;
            coprimo = euclides(vida_will, vida_gabriel);
            if (coprimo == 1)
            {
                atk_gabriel += 25;
                vida_will -= atk_gabriel;
            }
            else
            {
                vida_will -= atk_gabriel;
            }
        }
        else if (habilidade_gabriel == 3)
        {
            // Se a vida ou ataque for um n�mero primo, aumenta o ataque em 10.
            int eh_vida;
            int eh_atk;
            eh_vida = eh_primo(vida_gabriel, sqrt(vida_gabriel));
            eh_atk = eh_primo(atk_gabriel, sqrt(atk_gabriel));
            if (eh_vida == 1 || eh_atk == 1)
            {
                atk_gabriel += 10;
                vida_will -= atk_gabriel;
            }
            else
            {
                vida_will -= atk_gabriel;
            }
        }
        if (vida_will > 0)
        {
            // WILL ATK DE VOLTA
            if (habilidade_will == 1)
            {
                // ATK 2 vezes
                int eh_round;
                eh_round = eh_primo(round, sqrt(round));
                if (eh_round == 1)
                {
                    vida_gabriel -= atk_will;
                    vida_gabriel -= atk_will;
                }
                else
                {
                    vida_gabriel -= atk_will;
                }
            }
            else if (habilidade_will == 2)
            {
                // Se a vida for coprimo da vida inimiga, aumenta o ataque em 25.
                int coprimo;
                coprimo = euclides(vida_will, vida_gabriel);
                if (coprimo == 1)
                {
                    atk_will += 25;
                    vida_gabriel -= atk_will;
                }
                else
                {
                    vida_gabriel -= atk_will;
                }
            }
            else if (habilidade_will == 3)
            {
                // Se a vida ou ataque for um n�mero primo, aumenta o ataque em 10.
                int eh_vida;
                int eh_atk;
                eh_vida = eh_primo(vida_will, sqrt(vida_will));
                eh_atk = eh_primo(atk_will, sqrt(atk_will));
                if (eh_vida == 1 || eh_atk == 1)
                {
                    atk_will += 10;
                    vida_gabriel -= atk_will;
                }
                else
                {
                    vida_gabriel -= atk_will;
                }
            }
        }
        else if (vida_will <= 0)
        {
            //WILL J� PERDEU
            return 0;
        }
    }
    if (vida_will <= 0 || vida_gabriel <=0)
    {
        if (vida_will <= 0)
        {
            return 0;
        }
        else if (vida_gabriel <= 0)
        {
            return 1;
        }
    }
    else
    {
        return batalha(habilidade_will, atk_will, vida_will, habilidade_gabriel, atk_gabriel, vida_gabriel, round+1, i);
    }
}

void repetir (int x, int contador, int aux1, int aux2){
    if (contador > x)
    {
        printf("Will ganhou %d rodadas\n", aux1);
        printf("Gabriel ganhou %d rodadas\n", aux2);
        return;
    }
    int i, habilidade_will, atk_will, vida_will, habilidade_gabriel, atk_gabriel, vida_gabriel;
    scanf("%d %d %d %d %d %d %d", &i, &habilidade_will, &atk_will, &vida_will, &habilidade_gabriel, &atk_gabriel, &vida_gabriel);
    int resultado;
    resultado = batalha(habilidade_will, atk_will, vida_will, habilidade_gabriel, atk_gabriel, vida_gabriel, 1, i);
    if (resultado == 1)
    {
        aux1++;
    }
    else if (resultado == 0)
    {
        aux2++;
    }
    return repetir(x, contador+1, aux1, aux2);
}
int main(){
    //int x, i, habilidade_will, atk_will, vida_will, habilidade_gabriel, atk_gabriel, vida_gabriel;
    //scanf("%d %d %d %d %d %d %d %d", &x, &i, &habilidade_will, &atk_will, &vida_will, &habilidade_gabriel, &/atk_gabriel, &vida_gabriel);
    //printf("%d", batalha(habilidade_will, atk_will, vida_will, habilidade_gabriel, atk_gabriel, vida_gabriel, 1, i));
    int x;
    scanf("%d", &x);
    repetir(x, 1, 0, 0);
    return 0;
}
