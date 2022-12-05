#include <stdio.h>
int main(){
    int alunos, livros, conceito;
    scanf ("%d\n %d", &alunos, &livros);
    conceito = livros / alunos;
    if (conceito <= 8)
    {
        printf("A\n");
    }
    else if (conceito <= 12)
    {
        printf("B\n");
    }
    else if (conceito <= 18)
    {
        printf("C\n");
    }
    else if (conceito > 18)
    {
        printf("D\n");
    }
    
    
    return 0;
}
