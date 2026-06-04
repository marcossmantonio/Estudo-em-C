#include <stdio.h>

int main(){

    char nome[50];
    printf(" qual e o seu nome?\n");
    scanf("%s",nome);
    printf ("ola %s, vamos fazer um calculo?\n", nome);
    int a, b, c;
    printf("digite um numero!\n");
    scanf("%d", &a);

    printf("show, o numero que voce digitou foi %d, agora digite outro numero\n", a);
    scanf("%d", &b);

    c = a + b;
    printf("o resultado da soma de %d + %d = %d\n", a, b, c);
    
    

    

    return 0;
}
