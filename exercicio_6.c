#include <stdio.h>

int main(){

    int opcao;
    char c = 'ç';
    

    printf("voce tem 3 op%coes de viagem:\n", c);
    printf("1- praia\n2- parque\n3- paris\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("voce escolheu ir para a praia!\n");
            break;
        case 2 :
            printf("voce escolheu ir para o parque!\n");
            break;
        case 3:

            printf(" voce escolheu ir para paris!\n");
            break;
        default:
            printf("opcao invalida!\n");
    }





    return 0;

}
