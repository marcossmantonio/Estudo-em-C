#include <stdio.h>

int main() {

    char nome[100]; \\ vareavel pra letras
    printf("digite seu nome:"); \\ printana tela a informação
    scanf("%s", nome); \\ coleta dados do teclado

    int idade; \\ vareavel pranumeros inteiros
    printf("ola, %s", nome); \\ o %s serve para o local onde a vareavel apareceta
    printf("\nqual e sua idade?");
    
    scanf("%d", &idade);
    printf("%s voce tem %d anos de idade", nome, idade);




    return 0;
}
