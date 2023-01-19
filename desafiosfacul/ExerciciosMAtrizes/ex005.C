#define TAM 3
#include <stdio.h>

int valida(void);
int encontrar_linha_elem_iguais(char m[TAM][TAM]);
int econtrar_colunas_elem_iguais(char m[TAM][TAM]);
int encontrar_diagonal_elem_iguaisv2(char m[TAM][TAM]);

int main(void){
    char M_3x3[TAM][TAM], i, j;

    /*Ler a Matriz utilizando a função valida() como validador de dados*/
    for (i = 0; i < TAM ; ++i)
    {
        for (j = 0; j < TAM ; ++j) M_3x3[i][j] = valida();
    }
    printf("\n");


    /*Imprimir a Matriz*/
    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++) printf("%c", M_3x3[i][j]);
        printf("\n");
    }

    printf("\n");

    /*Imprimir quais linhas tem elementos iguais*/
    encontrar_linha_elem_iguais(M_3x3);

    printf("\n");

    /*Imprimir quais colunas possuem elementos iguais*/
    econtrar_colunas_elem_iguais(M_3x3);

    printf("\n");

    /*Verificar quais diagonais possuem elementos iguais entre si*/
    encontrar_diagonal_elem_iguaisv2(M_3x3);
    
    return 0;
}

int valida(void){
    int b, flag;
    char a;
    
    do
    {
        flag = 0;
        a = getchar();
        getchar();
        if (a != '0' && a != 'X')
        {
            printf("Digite 0 ou X\n");
            flag = 1;
        }
    } while (flag == 1);

    return a;  
}

int encontrar_linha_elem_iguais(char m[TAM][TAM]){
    int i, j, flag;

    for (i = 0; i < TAM ; i++)
    {
        flag = 0;
        for (j = 0; j < TAM - 1; j++) if (m[i][j] != m[i][j + 1]){
            flag = 1;
            break;
        }

        if (flag == 0) printf("Os elementos da linha %d sao iguais entre si\n", i);

    }

    return 0;
}

int econtrar_colunas_elem_iguais(char m[TAM][TAM]){

    int i, j, flag;

    for (j = 0; j < TAM ; j++)
    {
        flag = 0;
        for (i = 0; i < TAM - 1; i++) if (m[i][j] != m[i + 1][j]){
            flag = 1;
            break;
        }

        if (flag == 0) printf("Os elementos da coluna %d sao iguais entre si\n", j);

    }

    return 0;
}

int encontrar_diagonal_elem_iguaisv2(char m[TAM][TAM]){
    int i, flag_p, flag_s;

    flag_p = flag_s = 0;
    for (i = 0; i < TAM - 1; i++) 
    {
    if (m[i][i] != m[i + 1][i + 1]) flag_p = 1; /*verifica se os elementos da diagonal principal são iguais entre si*/

    if (m[i][TAM - i - 1] != m[i + 1][TAM - i - 2]) flag_s = 1; /*verifica se os elementos da diagonal secundária são iguais entre si*/

    if (flag_p == 1 && flag_s == 1) break;
    }

    if (flag_p == 0) printf("A diagonal principal possui elementos iguais entre si.\n");

    if (flag_s == 0) printf("A diagonal secundaria possui elementos iguais entre si.\n");

    return 0;
}