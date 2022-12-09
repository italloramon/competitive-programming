#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int days, km;
    printf("Digite a quantidade de dias de locacao:\n");
    printf("Digite a quantidade de km rodados:\n");
    scanf("%d %d", &days, &km);
    double total = (days * 30 + (km * 0.01)) * 0.9;
    printf("Valor a pagar pelo aluguel: R$ %.6f\n", total);
	return 0;
}
