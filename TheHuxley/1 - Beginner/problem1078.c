#include <stdio.h>
int main(){
    double n1, n2, n3;
    double media;
    scanf("%lf\n %lf\n %lf", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    if (media >= 0 && media <= 40){
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
    }
    else if (media > 40 && media < 70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
    }
    else if (media >= 70 && media <= 100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
    }
    else
    {
        printf("Media invalida\n");
    }
    
    return 0;
}
