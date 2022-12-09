#include <stdio.h>
void ler_array(int array[], int i){
    if (i == 1000)
    {
        return;
    }
    scanf("%d", &array[i]);
    ler_array(array, i+1);
}
void percorrer_array(int array[], int num, int i, int contador){
    if (i == 1000)
    {
        printf("%d appeared %d times\n", num, contador);
        return;
    }
    if (array[i] == num)
    {
        contador++;
    }
    percorrer_array(array, num, i+1, contador);
}
void principal(int array[]){
    ler_array(array, 0);
    int num;
    scanf("%d", &num);
    if (array[0] == -1)
    {
        return;
    }
    percorrer_array(array, num, 0, 0);
    principal(array);
}
int main(){
    int array[1000];
    principal(array);
    return 0;
}
