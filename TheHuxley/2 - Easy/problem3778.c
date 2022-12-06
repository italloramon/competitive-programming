#include <stdio.h>

double dano_total(int lvl_personagem, double dano_personagem){
    double dano_total;
    if(lvl_personagem <= 5)
    { 
        dano_total = dano_personagem * 1.20;
    }
    else if (lvl_personagem >= 6 && lvl_personagem <=10)
    {
        dano_total = dano_personagem * 1.50;
    }
    else if (lvl_personagem >= 11 && lvl_personagem <= 15)
    {
        dano_total = dano_personagem * 1.80;
    }
    else if (lvl_personagem >= 16 && lvl_personagem <= 20)
    {
        dano_total = dano_personagem * 2;
    }
    
    return dano_total;
}

double vida_total(int lvl_inimigo, double vida_inimigo){
    double vida_total;
    if(lvl_inimigo <= 5)
    { 
        vida_total = vida_inimigo * 1.20;
    }
    else if (lvl_inimigo >= 6 && lvl_inimigo <=10)
    {
        vida_total = vida_inimigo * 1.50;
    }
    else if (lvl_inimigo >= 11 && lvl_inimigo <= 15)
    {
        vida_total = vida_inimigo * 1.80;
    }
    else if (lvl_inimigo >= 16 && lvl_inimigo <= 20)
    {
        vida_total = vida_inimigo * 2;
    }
     
    return vida_total;
}

int main(){
    int lvl_personagem, lvl_inimigo;
    double dano_personagem, vida_inimigo, vitoria;
    scanf("%d %lf %d %lf", &lvl_personagem, &dano_personagem, &lvl_inimigo, &vida_inimigo);
    if (lvl_personagem < 1 || lvl_inimigo < 1)
    {
        printf("Nivel abaixo\n");
    }
    else if (lvl_personagem > 20 || lvl_inimigo > 20)
    {
        printf("Nivel acima\n");
    }
    else
    {
        vitoria = vida_total(lvl_inimigo, vida_inimigo) -  dano_total(lvl_personagem, dano_personagem);
        if(vitoria <= 0)
        {
            //Personagem 1 ganhou
            printf("Personagem 1 venceu\nDano causado: %.2lf\n", dano_total(lvl_personagem, dano_personagem));
        }
        else
        {
            //Personagem 2 ganhou
            printf("Personagem 2 venceu\nVida restante: %.2lf\n", vitoria);
        }
        
    }
    return 0;
}
