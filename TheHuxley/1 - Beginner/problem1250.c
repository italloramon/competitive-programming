#include <stdio.h>
#include <math.h>
int roundx(int round_b, int round_c, int d1, int v2){
    if (round_c <= round_b)
    {
        return 1;
    }
    else
    {
        d1 += 50;
    }
    round_b--;
    if (round_b == 0)
    {
        return 0;
    }
    round_c = ceil(v2/(d1*1.0));
    roundx(round_b, round_c, d1, v2);
}


void batalha(int n){
    if (n == 0)
    {
        return;
    }
    int v1, v2, d1, d2;
    scanf("%d %d %d %d", &v1, &v2, &d1, &d2); 
    int round_b, round_c;
    round_b = ceil(v1/(d2*1.0));
    round_c = ceil(v2/(d1*1.0));
    int res = roundx(round_b, round_c, d1, v2);
    if (res == 1)
    {
        printf("Clodes\n");
    }
    else
    {
        printf("Bezaliel\n");
    }
    
    batalha(n-1);
}
int main(){
    int n, v1, v2, d1, d2;
    scanf("%d", &n);
    batalha(n);
}
