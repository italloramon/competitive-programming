#include <stdio.h>

typedef struct {
    int x, y;
} help;

int check(int a, int b, help h[])
{
    for (int i = 0; i < 3; i++) {
        if ((h[i].x == a || h[i].y == a) && (h[i].x == b || h[i].y == b)) return 1; //par somado
    }
    return 0;
}

int subsets(int a[])
{
    int c = 0;
    help h[3];

    int cont = 1; //vazio

    if ((a[0] + a[1] + a[2] ) % 2 == 0) cont++;

    for (int i = 0; i < 3; i++){
        if (a[i] % 2 == 0) cont++;

        for (int j = 0; j < 3; j++) {
            if (i != j) {
                if ((a[i] + a[j]) % 2 == 0) 
                {
                    if (!check(a[i], a[j], h)) {
                        cont++;
                        h[c].x = a[i];
                        h[c].y = a[j];
                        c++;
                    }
                }
            }
        }
    
    }
    return cont;
}

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++) 
        scanf("%d", &a[i]);
    
    printf("%d\n", subsets(a));

    return 0;
}
