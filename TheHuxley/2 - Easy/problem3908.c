#include <stdio.h>
void ler_array(int array[], int i, int tamanho){
    if (i == tamanho)
    {
        return;
    }
    scanf("%d", &array[i]);
    ler_array(array, i+1, tamanho);
}
void enfrentar(int energia_ninjas[], int ordem[], int i, int tamanho, int energia, double c){
    if (i == tamanho)
    {
        printf("N�vel de energia: %d\n", energia);
        double porcentagem;
        porcentagem = (c / (tamanho-1)) * 100;
        printf("%.2lf%%\n", porcentagem);
        if (energia > 20000)
        {
            printf("Marquinhos � o novo Mestre da Vila da �rvore!\n");
        }
        else
        {
            printf("Continue tentando!\n");
        }
        return;
    }
    int p_ninja;
    p_ninja = energia_ninjas[ordem[i]];
    if (energia >= p_ninja)
    {
        energia += energia - p_ninja;
        c+=1;
    }
    enfrentar(energia_ninjas, ordem, i+1, tamanho, energia, c);
}
int main(){
    int energia, n_ninjas;
    scanf("%d %d", &energia, &n_ninjas);
    int energia_ninjas[n_ninjas+1];
    int ordem[n_ninjas+1];
    ler_array(energia_ninjas, 1, n_ninjas+1);
    ler_array(ordem, 1, n_ninjas+1);
    enfrentar(energia_ninjas, ordem, 1, n_ninjas+1, energia, 0);
    return 0;
}
