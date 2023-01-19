#define TAM 20
#include <stdio.h>

int valida(void);
int encontrar_linhas_elem_iguais(int m[TAM][TAM]);
int econtrar_colunas_elem_iguais(int m[TAM][TAM]);
int encontrar_diagonal_elem_iguais(int m[TAM][TAM]);
int encontrar_diagonal_elem_iguaisv2(int m[TAM][TAM]); /*Esses dois últimos módulos realizam a mesma tarefa, mas somente o segundo está sendo utilizado no módulo principal por ser mais enxuto.*/

/*Módulo Principal*/
int main(void){
    int M_20x20[TAM][TAM], i, j;

    /*Ler a Matriz utilizando a função valida() como validador de dados*/
    for (i = 0; i < TAM ; ++i)
    {
        for (j = 0; j < TAM ; ++j) M_20x20[i][j] = valida();
    }
    printf("\n");


    /*Imprimir a Matriz*/
    for (i = 0; i < TAM ; i++){
        for (j = 0; j < TAM; j++) printf("%d", M_20x20[i][j]);
        printf("\n");
    }

    printf("\n");

    /*Imprimir o número das linhas que são iguais*/
    encontrar_linhas_elem_iguais(M_20x20);

    printf("\n");

    /*Imprimir o número das colunas que são iguais*/
    econtrar_colunas_elem_iguais(M_20x20);

    printf("\n");

    /*Verificar se as diagonais possuem elementos iguais respectivamente*/
    encontrar_diagonal_elem_iguaisv2(M_20x20);
    
    return 0;
}

/*Módulo para validar somente entradas de 0 ou 1*/
int valida(void){
    int b, flag;
    char a;
    
    do
    {
        flag = 0;
        a = getchar();
        getchar();
        b = a - '0';
        if (b != 1 && b != 0)
        {
            printf("Digite 0 ou 1\n");
            flag = 1;
        }
    } while (flag == 1);

    return b;  
}

int encontrar_linhas_elem_iguais(int m[TAM][TAM]){
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

/*Módulo para encontrar colunas com elementos iguais*/
int econtrar_colunas_elem_iguais(int m[TAM][TAM]){

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

/*Módulo para verificar para a diagonal principal e secundária se elas contém elementos iguais respectivamente*/
int encontrar_diagonal_elem_iguais(int m[TAM][TAM]){
    int i, flag;

    /*Diagonal principal*/
    flag = 0;
    for (i = 0; i < TAM - 1; i++) if (m[i][i] != m[i + 1][i + 1])
    {
        flag = 1;
        break;
    }

    if (flag == 0) printf("A diagonal principal possui elementos iguais entre si.\n");
    
    /*diagonal secundaria*/
    flag = 0;
    for (i = 0; i < TAM - 1; i++) if (m[i][TAM - i - 1] != m[i + 1][TAM - i - 2]){
        flag = 1;
        break;
    }

    if (flag == 0) printf("A diagonal secundaria possui elementos iguais entre si.\n");

    return 0;
}

/*Módulo alternativo ao encntrar_diagonal_elem_iguais*/
int encontrar_diagonal_elem_iguaisv2(int m[TAM][TAM]){
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