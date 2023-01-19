#include <stdio.h>
#include <string.h>
#include <math.h>

#define N_ALUN 3

int valida(void);
void calcular_notas_finais(int M[][4]);
int maior_valor_coluna(int M[][4], int col_do_valor_retornado, int colum_analisada);
float media_coluna(int M[][4], int coluna);
void imprimir(int M[][4]);


int main(void){
    int i, j, matricula_maior_nota, M[N_ALUN][4];
    float media;

    printf("ENTRE SOMENTE COM VALORES INTEIROS\n\n");

    for (i = 0; i < N_ALUN; ++i)
        for (j = 0; j < N_ALUN; ++j)
            switch (j)
            {
            case 0:
                printf("\nNumero da matricula: ");
                M[i][j] = valida();
                break;
            
            case 1:
                printf("Media da prova: ");
                M[i][j] = valida();
                break;

            case 2:
                printf("Media dos trabalhos: ");
                M[i][j] = valida();
                break;

            default:
                break;
            }
    
    calcular_notas_finais(M);

    imprimir(M);


    matricula_maior_nota = maior_valor_coluna(M, 0, 3);

    media = media_coluna(M, 3);
  
    printf("Matricula da maior nota: %d\n", matricula_maior_nota);
    printf("Media: %f", media);
    
    return 0;
}

int valida(void){
    char a[80];
    int i, expoente, num, flag;

    do{
        flag = 0;
        
        gets(a);
        setbuf(stdin, NULL);
        
        expoente = strlen(a) - 1;
        num = 0;
        
        for (i = 0; i < strlen(a); i++)
            if (a[i] >= '0' && a[i] <= '9'){
                num += (float) (a[i] - '0') * (pow(10, expoente));
                --expoente;
            }
            else {printf("Entre com um numero valido\n"); flag=1; break;}

    }while (flag == 1);

    return num;
}

void imprimir(int M[][4]){
    int i, j;
    
    for (i = 0; i < N_ALUN; ++i){
        for (j = 0; j < 4; ++j) printf("%d ", M[i][j]);
        puts("");
    }
}

void calcular_notas_finais(int M[][4]){
    int i;

    for (i = 0; i < N_ALUN; ++i) M[i][3] = M[i][1] + M[i][2];
}

int maior_valor_coluna(int M[][4], int col_do_valor_retornado, int colum_analisada){
    int maior_valor, matricula, i;

    maior_valor = matricula = 0;
    for (i = 0; i < N_ALUN; ++i) 
        if (M[i][colum_analisada] > maior_valor) {
            maior_valor = M[i][colum_analisada];
            matricula = M[i][col_do_valor_retornado];
        }
    
    return matricula;
}

float media_coluna(int M[][4], int coluna){
    float media = 0;
    int i;

    for (i = 0; i < N_ALUN; ++i) media += M[i][coluna];

    return media / N_ALUN;
}