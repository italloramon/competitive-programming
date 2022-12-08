#include <stdio.h>
int main(){
    double livros, alunos;
    double al;
    printf("Digite a quantidade de livros:\n");
    scanf("%lf", &livros);
    printf("Digite a quantidade de alunos:\n");
    scanf("%lf", &alunos);
    al = alunos / livros;
    printf("Numero de alunos por livro: ");
    if ((int)alunos % (int)livros == 0)
    {
        printf("%.0lf.", al);
    }
    else
    {
        if (((al * 100) / 100) > 10)
        {
            printf("%.2lf.", al);
        }
        else
        {
            printf("%.1lf.", al);
        }
    }
    if (al <= 8)
    {
        printf(" Conceito A no MEC.\n");
    }
    else if (al <= 12)
    {
        printf(" Conceito B no MEC.\n");
    }
    else if (al <= 18)
    {
        printf(" Conceito C no MEC.\n");
    }
    else
    {
        printf(" Conceito D no MEC.\n");
    }
    
    return 0;
}
