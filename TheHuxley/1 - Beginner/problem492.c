#include <stdio.h>
void cafe(int n, char tipo, int contador, int capsulas){
    if (tipo == 'P' || tipo == 'p')
    {
        capsulas += n * 10;
    }
    else if (tipo == 'G' || tipo == 'g')
    {
        capsulas += n * 16;
    }
    if(contador == 7){
        printf("%d\n%d\n", capsulas, (capsulas*2) / 7);
        return;
    }
    contador++;
    scanf("%d %c", &n, &tipo);
    cafe(n, tipo, contador, capsulas);
}
int main(){
    int n;
    char tipo;
    cafe(n, tipo, 0, 0);
    return 0;
}
