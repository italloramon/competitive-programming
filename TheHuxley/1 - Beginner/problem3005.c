#include <stdio.h>
int main(){
    int casa, tempo, torcedores, lesionados, entrosamento;
    double  vitoria;
    vitoria = 100.0;
    scanf("%d %d %d %d %d", &casa, &tempo, &torcedores, &lesionados, &entrosamento);

    if (casa == 1)
    {
        if (tempo == 1) // Sol
        {
            vitoria = vitoria + 33.21;
        }
        else if (tempo == 2) // Neve
        {
            vitoria = vitoria + 10.51;
        }
        else if (tempo == 3) // Chuva
        {
            vitoria = vitoria - 20.7;
        }

        if (torcedores > 40000)
        {
            vitoria = vitoria + torcedores * 0.0008;
        }
        else
        {
            vitoria = vitoria - torcedores * 0.0008;
        }

        if (entrosamento > 0)
        {
            vitoria = vitoria + entrosamento * 2.7;
        }
        else
        {
            vitoria = vitoria - entrosamento * 1.8;
        }
        
        vitoria = vitoria - lesionados * 2.7;
    }

    else
    {
        if (tempo == 2 || tempo == 3)
        {
            vitoria = 0;
        }

        else if (tempo == 1)
        {
            vitoria = vitoria - 10.87;
            
            if (torcedores > 45000)
            {
                vitoria = vitoria - torcedores * 0.0003;
            }
            else
            {
                vitoria = vitoria - torcedores * 0.0001;
                
            }
            
            if (entrosamento > 0)
            {
                vitoria = vitoria + entrosamento * 5.2;
                
            }
            else
            {
                vitoria = vitoria - entrosamento * 1.5;
            }
            
            vitoria = vitoria - lesionados * 2.7;
            
        }   
    }

    if (vitoria > 100)
    {
        printf("A chance de vitoria do flamengo e de 100.00\n");
    }
    else if (vitoria <= 0)
    {
        printf("A chance de vitoria do flamengo e de 0.00\n");
    }
    else
    {
        printf("A chance de vitoria do flamengo e de %.2lf\n", vitoria);
    }
    

    return 0;
}
