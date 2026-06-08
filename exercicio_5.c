#include <stdio.h>
int main(){
    int nota;

    printf("quantos voce tirou na prova?\n");
    scanf("%d", &nota);

    if(nota >= 7){

        printf("APROVADO\n");

    } else if(nota <= 6){
        printf("REPROVADO\n");
    }

    return 0;
}
