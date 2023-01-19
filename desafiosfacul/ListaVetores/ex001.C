#include<stdio.h>
#include <conio.h>

#define TAM 80

int tamanho(char *M);
void mostrar_invertida(char *M);
void concaternar(char *str1, char *str2, char *str_concatenada);
int encontrar_car(char *str, char car);
int comparar_str(char *str1, char *str2);
char valida(void);

int main(void){
    char s1[TAM], s2[TAM], S[TAM * 2] = "\0";
    char op, car;
    int comp;

    /*Leitura de Dados*/

    /*Entrada das Strings*/
    printf("Entre com primeira string (ate 79 caracteres): ");
    fgets(s1, TAM, stdin);

    printf("String 1: %s\n", s1);

    setbuf(stdin, NULL);

    printf("Entre com a segunda string (ate 79 caracteres): ");
    fgets(s2, TAM, stdin);

    printf("String 2: %s\n", s2);

    setbuf(stdin, NULL);
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    /*Menu*/
    printf("MENU DE OPCOES\n");
    printf("a - mostrar strings invertidas\nb - concatenar strings\nc - comparar strings\nd - informar tamanho da string\ne - identificar ocorrencia de caractere\n\n");
    printf("Digite uma das opcoes acima (digite # para sair): ");
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

    op = valida();joao
    while (op != '#'){
        switch (op)
        {
        case 'a':
            mostrar_invertida(s1);
            printf("\n");
            mostrar_invertida(s2);
            break;

        case 'b':
            concaternar(s1, s2, S);
            printf("%s", S);
            break;
        
        case 'c':
            comp = comparar_str(s1, s2);

            if (comp == 1) printf("A string 1 e maior\n");
            else if (comp == -1) printf("A string 2 e maior\n");
            else printf("As strings sao iguais\n");
            break;

        case 'd':
            printf("Tamanho da string 1: %d\n\n", tamanho(s1)); 
            printf("Tamanho da string 2: %d\n\n", tamanho(s2));
            break;

        case 'e': 
            printf("Digite o caractere (caso o caractere nao seja encontrado, -1 sera impresso): ");
            scanf("%c", &car);
            setbuf(stdin, NULL);
            printf("O caractere %c foi encontrado no indice %d da string 1\n\n", car, encontrar_car(s1, car));
            printf("O caractere %c foi encontrado no indice %d da string 2\n\n", car, encontrar_car(s2, car));
            break;
        
        default:
            break;
        }
        printf("\nDigite uma das opcoes acima (digite # para sair): ");
        op = valida();
    }

    return 0;
}

char valida(void){
    int flag;
    char a;

    do {
        flag = 0;
        a = getchar();
        while (getchar() != '\n');
        printf("\n");
        if (a != 'a' && a != 'b' && a != 'c' && a != 'd' && a != 'e' && a != '#') {
            printf("Digite um caractere valido\n");
            flag = 1;
        } 
    } while (flag == 1);

    return a;
}

int tamanho(char *M){
    int cont;

    for (cont = 0;; cont++) if (M[cont] == '\0' || M[cont] == '\n') break;

    return cont;
}

void mostrar_invertida(char *M){
    int i, tam;

    tam = tamanho(M);

    for (i = 1; i <= tam; i++) printf("%c", M[tam - i]);
}

void concaternar(char *str1, char *str2, char *str_concatenada){
    int i, j;

    for (i = 0; i < tamanho(str1); i++) str_concatenada[i] = str1[i];

    for (j = 0; j < tamanho(str2); j++, i++) str_concatenada[i] = str2[j];
}

int encontrar_car(char *str, char car){
    int i;

    for (i = 0; i < tamanho(str); ++i) if (str[i] == car) return i;

    return -1;
}

int comparar_str(char *str1, char *str2){
    int i, tam;

    tam = tamanho(str1) > tamanho(str2) ? tamanho(str1): tamanho(str2);

    for (i = 0; i < tam; i++){
        if (str1[i] > str2[i]) return 1;
        else if (str1[i] < str2[i]) return -1;
    }

    return 0;
}