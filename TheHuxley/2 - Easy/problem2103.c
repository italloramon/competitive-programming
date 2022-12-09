#include <stdio.h>
#define LIN 3
#define COL 3
void ler_matriz(int matriz[][COL]){
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
int diagonal_principal(int matriz[][COL]){
    int c=0, ajuda_c=0;
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (i == j)
            {
                if (matriz[i][j] == 1)
                {
                    c++;
                }
            }
            else
            {
                if (matriz[i][j] == 0)
                {
                    ajuda_c++;
                }
                
            }
        }
    }
    if (ajuda_c == 6 && c == 3)
    {
        return c;
    }
    else
    {
        c=0;
        return c;
    }
}
int diagonal_secundario(int matriz[][COL]){
    int c=0, ajuda_c=0;
    for (int i = 0; i < LIN; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (i+j == COL-1)
            {
                if (matriz[i][j] == 1)
                {
                    c++;
                }
            }
            else
            {
                if (matriz[i][j] == 0)
                {
                    ajuda_c++;
                }
            }
        }
    }
    if (ajuda_c == 6 && c == 3)
    {
        return c;
    }
    else
    {
        c=0;
        return c;
    }
}
int main(){
    
    int golpe_luke[LIN][COL], golpe_valder[LIN][COL], vida_luke, vida_valder;
    scanf("%d %d", &vida_luke, &vida_valder);
    int c = 0;
    while(c<10)
    {
        ler_matriz(golpe_luke);
        ler_matriz(golpe_valder);
        int dp_luke, dp_valder, ds_luke, ds_valder;
        dp_luke = diagonal_principal(golpe_luke);
        dp_valder = diagonal_principal(golpe_valder);
        ds_luke = diagonal_secundario(golpe_luke);
        ds_valder = diagonal_secundario(golpe_valder);

        if ((dp_luke == 3 && dp_valder == 3) || (ds_luke == 3 && ds_valder == 3))
        {
            vida_luke -=15;
            vida_valder -=15;
            if (vida_valder <= 0 && vida_luke <= 0)
            {
                printf("Houve empate.\n");
                break;
            }
            c++;
        }
        else
        {
            if (vida_luke > 0)
            {
                if (dp_luke == 3 && dp_valder != 3 && ds_valder != 3 || ds_luke == 3 && dp_valder !=3 && ds_valder != 3)
                {
                    vida_valder -= 15;
                }

                if (vida_valder > 0)
                {
                    if (dp_valder == 3 && dp_luke != 3 && ds_luke != 3 || ds_valder == 3 && dp_luke != 3 && ds_luke != 3)
                    {
                        vida_luke -= 15;
                    }
                    if (vida_luke > 0)
                    {
                        c++;
                    }
                    else
                    {
                        printf("Darth Vader venceu.\n");
                        break;
                    }
                }
                else
                {
                    printf("Luke Skywalker venceu.\n");
                    break;
                }
            }
            else
            {
                if (vida_valder > 0)
                {
                    printf("Darth Vader venceu.\n");
                    break;
                }
                else
                {
                    printf("Houve empate.\n");
                    break;
                }
                
            }
        }
    }
    if (c == 10 && vida_luke > 0 && vida_valder > 0)
    {
        printf("Houve empate.\n");
    }
    else if (c == 10 && vida_luke == 0 && vida_valder == 0)
    {
        printf("Houve empate.\n");
    }
    else if (c == 10 && vida_luke <= 0 && vida_valder > 0)
    {
        printf("Darth Vader venceu.\n");
    }
    else if (c == 10 && vida_luke > 0 && vida_valder <= 0)
    {
        printf("Luke Skywalker venceu.\n");
    }
    return 0;
}
