#define TAM 3
#include <stdio.h>

int valida(void);
int encontrar_linhas_elem_iguais(char m[TAM][TAM]);
int encontrar_colunas_elem_iguais(char m[TAM][TAM]);
int encontrar_diagonal_elem_iguais(char m[TAM][TAM]);

/*Módulo Principal*/
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

    /*Imprimir o número das linhas que são iguais*/
    encontrar_linhas_elem_iguais(M_3x3);

    printf("\n");

    /*Imprimir o número das colunas que são iguais*/
    encontrar_colunas_elem_iguais(M_3x3);

    printf("\n");

    /*Verificar quais diagonais tem elementos iguais*/
    encontrar_diagonal_elem_iguais(M_3x3);
    
    return 0;
}

/*Módulo para validar somente entradas de 0 ou 1*/
int valida(void){
    int flag;
    char a;
    
    do
    {
        flag = 0;
        a = getchar();
        getchar();
        if (a != '0' && a != '1')
        {
            printf("Digite 0 ou 1\n");
            flag = 1;
        }
    } while (flag == 1);

    return a;  
}

/*Módulo para encontrar linhas que contenham o mesmo elemento*/
int encontrar_linhas_elem_iguais(char m[TAM][TAM]){
    int i;

    for (i = 0; i < TAM ; ++i){
        if (m[i][0] == m[i][1] && m[i][1] == m[i][2]) printf("os elementos da linha %d sao iguais\n", i);
    }

    return 0;
}

/*Módulo para encontra colunas iguais*/
int encontrar_colunas_elem_iguais(char m[TAM][TAM]){
    int j;

    for (j = 0; j < TAM; j++){
        if (m[0][j] == m[1][j] && m[1][j] == m[2][j]) printf("Os elementos da coluna %d sao iguais\n", j);
    }

    return 0;
}

/*Módulo para encontrar diagonais iguais, tanto a principal quanto a secundária*/
int encontrar_diagonal_elem_iguais(char m[TAM][TAM]){
    int i, j;

    /*Diagonal Principal*/
    if (m[0][0] == m[1][1] && m[1][1] == m[2][2]) printf("Os elementos da diagonal principal da matriz sao iguais\n");

    /*Diagonal Secundária*/
    if (m[0][2] == m[1][1] && m[1][1] == m[2][0]) printf("Os elementos da diagonal secundaria da matriz sao iguais\n");

    return 0;
}