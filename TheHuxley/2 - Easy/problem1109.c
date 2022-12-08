#include <stdio.h>
void bestday(int cdia){
    if (cdia == 1)
    {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
    }
    else if (cdia == 2)
    {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
    }
    else if (cdia == 3)
    {
        printf("DIA QUE MAIS PRODUZIU: TER�A\n");
    }
    else if (cdia == 4)
    {
        printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
    }
    else if (cdia == 5)
    {
        printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
    }
    else if (cdia == 6)
    {
        printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
    }
    else if (cdia == 7)
    {
        printf("DIA QUE MAIS PRODUZIU: SABADO\n");
    }
}
void meta(int programas, int l_codigos, int contador, int c_programas, int c_codigos, int maior_dia, int cdia){
    if (programas >= 5)
    {
        c_programas++;
    }
    if (l_codigos >= 100)
    {
        c_codigos++;
        
        if (maior_dia < l_codigos)
        {
            maior_dia = l_codigos;
            cdia = contador;
        }   
        if (maior_dia == l_codigos)
        {
            cdia = contador;
        }
    }
    if (contador == 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", c_programas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", c_codigos);
        bestday(cdia);
        return;
    }
    contador++;
    scanf("%d %d", &programas, &l_codigos);
    return meta(programas, l_codigos, contador, c_programas, c_codigos, maior_dia, cdia);
}
int main(){
    int programas, l_codigos;
    scanf("%d %d", &programas, &l_codigos);
    meta(programas, l_codigos, 1, 0, 0, l_codigos, 0);
}
