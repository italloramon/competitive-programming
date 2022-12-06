#include <stdio.h>
int rodada1(int x1, int y1){
    if (x1 == 1 && y1 == 1) 
    {
        return 2;
    }
    else if (x1 == 1 && (y1 == 3 || y1 == 4))
    {
        return 1; 
    }
    else if (x1 == 1 && (y1 == 2 || y1 == 5))
    {
        return 0;
    }
    
    if (x1 == 2 && y1 ==2)
    {
        return 2;
    }
    else if (x1 == 2 && (y1 == 1 || y1 ==4))
    {
        return 1;
    }
    else if(x1 == 2 && (y1 == 3 || y1 == 5))
    {
        return 0;
    }
    
    if (x1 == 3 && y1 == 3) 
    {
        return 2;
    }
    else if (x1 == 3 && (y1 == 2 || y1 == 5))
    {
        return 1;
    }
    else if (x1 == 3 && (y1 == 1 || y1 == 4))
    {
        return 0;
    }
    
    if (x1 == 4 && y1 == 4) 
    {
        return 2;
    }
    else if (x1 == 4 && (y1 == 5 || y1 == 3))
    {
        return 1;
    }
    else if (x1 == 4 && (y1 == 1 || y1 == 2))
    {
        return 0;
    }

    if (x1 == 5 && y1 == 5) 
    {
        return 2;
    }
    else if (x1 == 5 && (y1 == 1 || y1 == 2))
    {
        return 1; 
    }
    else if (x1 == 5 && (y1 == 3 || y1 == 4))
    {
        return 0;
    }
}

int main(){
    int x1, x2, y1, y2, v1, v2;
    double aposta1, aposta2;
    scanf("%lf %lf %d %d %d %d", &aposta1, &aposta2, &x1, &y1, &x2, &y2);
    v1 = rodada1(x1, y1);
    v2 = rodada1(x2, y2);

    if(v1 == 2)
    {
        printf("Empate\n");
    }
    else if (v1 == 1)
    {
        printf("Rodrigo venceu a partida 1\n"); 
    }
    else if (v1 == 0)
    {
        printf("Willy venceu a partida 1\n");
    }

    if(v2 == 2)
    {
        printf("Empate\n");
    }
    else if (v2 == 1)
    {
        printf("Rodrigo venceu a partida 2\n"); 
    }
    else if (v2 == 0)
    {
        printf("Willy venceu a partida 2\n");
    }
    
   
    if (v1 == 2 && v2 == 2)
    {
        printf("Empate na aposta\n");
    }
    else if (v1 == 1 && v2 == 1)
    {
        printf("Rodrigo foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2lf\n", (aposta1 + aposta2) * 1.1);
    }
    else if (v1 == 0 && v2 == 0)
    {
        printf("Willy foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2lf\n", (aposta1 + aposta2) * 1.1);
    }
    else if (v1 == 2 && v2 == 1)
    {
        printf("Rodrigo foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2lf\n", (aposta1 + aposta2) * 1.05);
    }
    else if (v1 == 2 && v2 == 0)
    {
        printf("Willy foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2lf\n", (aposta1 + aposta2) * 1.05);
    }
    else if (v1 == 1 && v2 == 2)
    {
        printf("Rodrigo foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2lf\n", (aposta1 + aposta2) * 1.05);
    }
    else if (v1 == 0 && v2 == 2)
    {
        printf("Willy foi o vencedor da aposta\n");
        printf("Valor ganho: R$%.2lf\n", (aposta1 + aposta2) * 1.05);
    }
    else if (v1 == 1 && v2 == 0)
    {
        printf("Empate na aposta\n");
    }
    else if (v1 == 0 && v2 ==1)
    {
        printf("Empate na aposta\n");
    }
    
    return 0;
}
