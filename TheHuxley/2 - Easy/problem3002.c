#include <stdio.h>
int quartos (int x, int y){
    if((x - 1 == y) || (x +1 == y)){
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main(){
    int h1, h2, h3, h4, h5;
    int total = 1;
    scanf("%d %d %d %d %d", &h1, &h2, &h3, &h4, &h5);
    
    total =  total + quartos(h1, h2);
    total =  total + quartos(h1, h3);
    total =  total + quartos(h1, h4);
    total =  total + quartos(h1, h5);
    total =  total + quartos(h2, h3);
    total =  total + quartos(h2, h4);
    total =  total + quartos(h2, h5);
    total =  total + quartos(h3, h4);
    total =  total + quartos(h3, h5);
    total =  total + quartos(h4, h5);

    if (total > 2){
        total = 2;
    }
    printf("%d\n", total);
    return 0;
}
