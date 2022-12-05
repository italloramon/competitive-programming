#include <stdio.h>
int main(){
    int altura, idade, brinquedo;
    scanf("%d\n %d", &altura, &idade);
    
    if (altura >= 170 && idade >= 16)
    {
        brinquedo = 3;
    }
    else if (altura >= 170)
    {
        if (idade >= 14)
        {
            brinquedo = 3;
        }
        else if (idade >= 12)
        {
            brinquedo = 2;
        }
        else if (idade < 12)
        {
            brinquedo = 1;
        }
        
    }
    else if (altura >= 150)
    {
        if (idade >= 16)
        {
            brinquedo = 3;
        }
        else if (idade >= 14)
        {
            brinquedo = 2;
        }
        else if (idade >= 12)
        {
            brinquedo = 1;
        }
        else if (idade < 12)
        {
            brinquedo = 0;
        }
        
    }
    else if (altura >= 140)
    {
        if (idade >= 16)
        {
            brinquedo = 2;
        }
        else if (idade >= 14)
        {
            brinquedo = 1;
        }
        else if (idade < 14)
        {
            brinquedo = 0;
        }
    }
    else if (altura < 170 && idade > 16)
    {
        brinquedo = 1;
    }
    else
    {
        brinquedo = 0;
    }
    
    printf("%d\n", brinquedo);
    
    return 0;
}
