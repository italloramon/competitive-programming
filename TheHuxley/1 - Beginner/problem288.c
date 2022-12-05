#include <stdio.h>
int main(){
    int i_grafica, ia, encap, indent, structs;
    scanf("%d %d %d %d %d", &i_grafica, &ia, &encap, &indent, &structs);
    if (i_grafica == 1 || ia == 1)
    {
        if (encap == 1 && indent == 1)
        {
            if (structs == 1)
            {
                printf("AVALIADO\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
