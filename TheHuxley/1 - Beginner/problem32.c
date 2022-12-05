#include <stdio.h>
int main(){
    double fh, cl;
    scanf("%lf", &fh);
    cl = (fh - 32) * 5/9;
    printf("%.2lf\n", cl);    
    return 0;
}
