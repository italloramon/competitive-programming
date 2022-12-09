#include <stdio.h>
#include <stdlib.h>

int vaqueiro(int qnts_vezes, char movimento_passado, int contador, int x, int y){
    if (qnts_vezes == 0)
    {
        return contador;
    }

    char movimento_atual; 
    scanf(" %c", &movimento_atual);
    if (movimento_atual == 'C')
    {
        y++;
    }
    else
    {
        x++;
    }
    
    if (x != y && abs(x - y) == 1)
    {
        if (movimento_atual == movimento_passado)
        {
            if (((y > x) && (movimento_atual == 'C')) || ((x > y) && (movimento_atual == 'D')))
            {
                contador++;
            }
            else
            {
                movimento_passado = movimento_atual;
                return vaqueiro(qnts_vezes - 1, movimento_passado, contador, x, y);
            }
        }
        else
        {
            movimento_passado = movimento_atual;
            return vaqueiro(qnts_vezes - 1, movimento_passado, contador, x, y);
        }
    }
    else if (x == y || ((x != y) && abs(x - y) != 1))
    {
        movimento_passado = movimento_atual;
        return vaqueiro(qnts_vezes - 1, movimento_passado, contador, x, y);
    }
    
    qnts_vezes--;
    return vaqueiro(qnts_vezes, movimento_atual, contador, x, y);

}
int main(){
    int x=0, y=0, contador = 0;
    char movimento_passado;
    int qnts_vezes;
    scanf("%d", &qnts_vezes);
    printf("%d\n", vaqueiro(qnts_vezes, movimento_passado, contador, x, y));
    return 0;
}
