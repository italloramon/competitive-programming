#include <stdio.h>
int duelo(int classePedro, double atkPedro, double vidaPedro, int classeTulio, double atkTulio, double vidaTulio){
    double ataque1, ataque2;
    // Classe: 1 (Guerreiro), 2 (Mago) ou 3 (Arqueiro).
    /*  
        Caso 1: Duelo entre Guerreiro e Arqueiro. O guerreiro recebe um aumento de 30% em rela��o a sua vida.

        Caso 2: Duelo entre Arqueiro e Mago. O arqueiro recebe um aumento de 25% em rela��o ao seu ataque.

        Caso 3: Duelo entre Mago e Guerreiro. O mago recebe um aumento de 15% em sua vida e em seu ataque.
    */

    //Caso 1
    if (classePedro == 1 && classeTulio == 3)
    {
        vidaPedro *= 1.30;
    }
    else if (classePedro == 3 && classeTulio == 1)
    {
        vidaTulio *= 1.30;
    }

    //Caso 2
    if (classePedro == 3 && classeTulio == 2)
    {
        atkPedro *= 1.25;
    }
    else if (classePedro == 2 && classeTulio == 3)
    {
        atkTulio *= 1.25;
    }
    
    //Caso 3
    if (classePedro == 2 && classeTulio == 1)
    {
        vidaPedro *= 1.15;
        atkPedro *= 1.15;
    }
    else if (classePedro == 1 && classeTulio  ==2)
    {
        vidaTulio *= 1.15;
        atkTulio *= 1.15;
    }
    
    if (vidaPedro <= vidaTulio)
    {
        // Pedro ataca primeiro
        vidaTulio -= atkPedro;
        if (vidaTulio > 0)
        {
            // Tulio ataca de volta
            vidaPedro -= atkTulio;
            if (vidaPedro <= 0)
            {
                //Tulio ganhou
                return 0;
            }
            else
            {
                if (vidaPedro > vidaTulio)
                {
                    //Pedro ganhou
                    return 1;
                }
                else if (vidaPedro < vidaTulio)
                {
                    //Tulio ganhou
                    return 0;
                }
                else
                {
                    if (atkPedro > atkTulio)
                    {
                        //Pedrou ganhou
                        return 1;
                    }
                    else
                    {
                        //Tulio ganhou
                        return 0;
                    }
                }
            }
        }
        else
        {
            // Pedro ganhou
            return 1;
        }
    }
    else
    {
        // Tulio ataca primeiro
        vidaPedro -= atkTulio;
        if (vidaPedro > 0)
        {
            //Pedro ataca de volta
            vidaTulio -= atkPedro;
            if (vidaTulio <= 0)
            {
                //Pedro ganhou
                return 1;
            }
            else
            {
                if (vidaTulio > vidaPedro)
                {
                    //Tulio ganhou
                    return 0;
                }
                else if (vidaTulio < vidaPedro)
                {
                    //Pedro ganhou
                    return 1;
                }
                else
                {
                    if (atkPedro > atkTulio)
                    {
                        //Pedrou ganhou
                        return 1;
                    }
                    else
                    {
                        //Tulio ganhou
                        return 0;
                    } 
                } 
            }
        }
        else
        {
            //Tulio ganhou
            return 0;
        }  
    }
}
int main(){
    int classe1, classe2, classe3, classe4, classe5, classe6;
    double atk1, atk2, atk3, atk4, atk5, atk6, vida1, vida2, vida3, vida4, vida5, vida6;
    scanf("%d %lf %lf %d %lf %lf %d %lf %lf %d %lf %lf %d %lf %lf %d %lf %lf", &classe1, &atk1, &vida1, &classe2, &atk2, &vida2, &classe3, &atk3, &vida3, &classe4, &atk4, &vida4, &classe5, &atk5, &vida5, &classe6, &atk6, &vida6);
    int rodada1, rodada2, rodada3;
    rodada1 = duelo(classe1, atk1, vida1, classe4, atk4, vida4);
    rodada2 = duelo(classe2, atk2, vida2, classe5, atk5, vida5);
    rodada3 = duelo(classe3, atk3, vida3, classe6, atk6, vida6);
    if (rodada1 == 1)
    {
        printf("Rodada1: Pedro\n");
    }
    else
    {
        printf("Rodada1: Tulio\n");
    }
    if (rodada2 == 1)
    {
        printf("Rodada2: Pedro\n");
    }
    else
    {
        printf("Rodada2: Tulio\n");
    }
    if (rodada3 == 1)
    {
        printf("Rodada3: Pedro\n");
    }
    else
    {
        printf("Rodada3: Tulio\n");
    }
    if ((rodada1 + rodada2 + rodada3) > 1)
    {
        printf("Pedro vitorioso\n");
    }
    else
    {
        printf("Tulio vitorioso\n");
    }
    
    return 0;
}
