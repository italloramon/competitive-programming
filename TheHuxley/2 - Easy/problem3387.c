#include <stdio.h>
int main(){
    int idade;
    scanf("%d", &idade);
    if (idade < 18)
    {
        printf("Voce precisa esperar mais %d ano(s)!\n", 18 - idade);
    }
    else
    {
        printf("Voce ja pode tirar habilitacao!\nVoce tem direito a habilitacao ha %d ano(s)\n", idade - 18);
    }
    return 0;
}
