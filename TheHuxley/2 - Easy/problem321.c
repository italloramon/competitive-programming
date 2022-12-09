#include <stdio.h>
int main(){
    
    int n, parada=1;
    double total_kg=0, total_real=0;
    scanf("%d", &n);
    while (parada <= n)
    {
        //Ler o preco
        double preco;
        scanf("%lf\n", &preco);
        total_real += preco;
        //Ler as frutas
        char frutas[500];
        int i=0, contador=1;
        fgets(frutas, 500, stdin);

        while (frutas[i] != '\0')
        {
            if (frutas[i] == ' ')
            {
                contador++;
            }
            i++;
        }
        total_kg += contador;
        printf("dia %d: %d kg\n", parada, contador);
        parada++;
    }
    printf("%.2lf kg por dia\n", total_kg/n);
    printf("R$ %.2lf por dia\n", total_real/n);
    return 0;
}
