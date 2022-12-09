#include <stdio.h>
void ler_matriz(int linhas, int colunas, int matriz[][colunas]){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimir_alpha(int i, int j, int tam_palavra, int verificador){
    char tabela[27];
    tabela[1] = 'A';
    tabela[2] = 'B';
    tabela[3] = 'C';
    tabela[4] = 'D';
    tabela[5] = 'E';
    tabela[6] = 'F';
    tabela[7] = 'G';
    tabela[8] = 'H';
    tabela[9] = 'I';
    tabela[10] = 'J';
    tabela[11] = 'K';
    tabela[12] = 'L';
    tabela[13] = 'M';
    tabela[14] = 'N';
    tabela[15] = 'O';
    tabela[16] = 'P';
    tabela[17] = 'Q';
    tabela[18] = 'R';
    tabela[19] = 'S';
    tabela[20] = 'T';
    tabela[21] = 'U';
    tabela[22] = 'V';
    tabela[23] = 'W';
    tabela[24] = 'X';
    tabela[25] = 'Y';
    tabela[26] = 'Z';
    
    if (verificador == 1)
    {
        printf("%c%d\n", tabela[(i+1)-(tam_palavra-1)], j+1);
        printf("%c%d\n", tabela[i+1], j+1);
    }
    else
    {
        printf("%c%d\n", tabela[(i+1)], (j+1)-(tam_palavra-1));
        printf("%c%d\n", tabela[i+1], j+1);
    }
}
int ler_matriz_horizontal(int linhas, int colunas, int matriz[][colunas], int palavra_numero[], int tam_palavra){
    int c = 0;
    int ajuda_c = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == palavra_numero[ajuda_c])
            {
                c++;
                ajuda_c++;
                if (c == tam_palavra)
                {
                    imprimir_alpha(i, j, tam_palavra, 0);
                    return c;
                } 
            }
        }
        if (c != tam_palavra)
        {
            c = 0;
            ajuda_c = 0;
        }
    }
    return c;
}
int ler_matriz_vertical(int linhas, int colunas, int matriz[][colunas], int palavra_numero[], int tam_palavra){
    int c = 0;
    int ajuda_c = 0;
    for (int j = 0; j < colunas; j++)
    {
        for (int i = 0; i < linhas; i++)
        {
            if (matriz[i][j] == palavra_numero[ajuda_c])
            {
                c++;
                ajuda_c++;
                if (c == tam_palavra)
                {
                    imprimir_alpha(i, j, tam_palavra, 1);
                    return c;
                } 
            }
        }
        if (c != tam_palavra)
        {
            c = 0;
            ajuda_c = 0;
        }
    }
    return c;
}
int main(){
    //LENDO OS VALORES
    int tam_palavra;
    scanf("%d\n", &tam_palavra);
    char palavra[tam_palavra+1];
    fgets(palavra, tam_palavra+1, stdin);
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    ler_matriz(linhas, colunas, matriz);

    char tabela[26];
    tabela[0] = 'A';
    tabela[1] = 'B';
    tabela[2] = 'C';
    tabela[3] = 'D';
    tabela[4] = 'E';
    tabela[5] = 'F';
    tabela[6] = 'G';
    tabela[7] = 'H';
    tabela[8] = 'I';
    tabela[9] = 'J';
    tabela[10] = 'K';
    tabela[11] = 'L';
    tabela[12] = 'M';
    tabela[13] = 'N';
    tabela[14] = 'O';
    tabela[15] = 'P';
    tabela[16] = 'Q';
    tabela[17] = 'R';
    tabela[18] = 'S';
    tabela[19] = 'T';
    tabela[20] = 'U';
    tabela[21] = 'V';
    tabela[22] = 'W';
    tabela[23] = 'X';
    tabela[24] = 'Y';
    tabela[25] = 'Z';

    int ascii[26];
    ascii[0] = 65;
    ascii[1] = 66;
    ascii[2] = 67;
    ascii[3] = 68;
    ascii[4] = 69;
    ascii[5] = 70;
    ascii[6] = 71;
    ascii[7] = 72;
    ascii[8] = 73;
    ascii[9] = 74;
    ascii[10] = 75;
    ascii[11] = 76;
    ascii[12] = 77;
    ascii[13] = 78;
    ascii[14] = 79;
    ascii[15] = 80;
    ascii[16] = 81;
    ascii[17] = 82;
    ascii[18] = 83;
    ascii[19] = 84;
    ascii[20] = 85;
    ascii[21] = 86;
    ascii[22] = 87;
    ascii[23] = 88;
    ascii[24] = 89;
    ascii[25] = 90;

    //Transformando a palavra em seus n�meros correspondentes 
    int palavra_numero[tam_palavra];
    for (int i = 0; i < tam_palavra; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (palavra[i] == tabela[j])
            {
                palavra_numero[i] = ascii[j];
            }
        }
    }

    int v_horizontal, v_vertical;
    v_horizontal = ler_matriz_horizontal(linhas, colunas, matriz, palavra_numero, tam_palavra);
    v_vertical = ler_matriz_vertical(linhas, colunas, matriz, palavra_numero, tam_palavra);
    //printf("%d %d", v_vertical, v_vertical);
    if (v_horizontal == 0 && v_vertical == 0)
    {
        printf("0\n");
    }
    
    return 0;
}
