#include <stdio.h>

int main(){{

    printf("ola voce e homem ou mulher? se for homem press h, se mulher press m?\n");
    char sexo, nome[50];
    scanf(" %c", &sexo);


        if (sexo == 'h' || sexo == 'm'){
            if (sexo == 'h'){
             printf("fala homem, como se chama?\n");
             scanf("%s", nome);
             printf("prazer em te conhecer %s\n", nome);
            } else if(sexo == 'm'){
              printf("fala mulher, como se chama?\n");
              scanf("%s", nome);
              printf("prazer em te conhecer %s\n", nome);
            } 
        } else {
            printf("a letra digitada nao e valida, tente novamente\n");
            fflush(stdin);

            

            printf("ola voce e homem ou mulher? se for homem press h, se mulher press m?\n");
            char sex, nom[50];
            scanf(" %c", &sex);
            
            

                if (sex == 'h' || sex == 'm'){
                    if (sex == 'h'){
                    printf("fala homem, como se chama?\n");
                    scanf("%s", nom);
                    printf("prazer em te conhecer %s\n", nom);


            } else if(sex == 'm'){
                    printf("fala mulher, como se chama?\n");
                    scanf("%s", nom);
                    printf("prazer em te conhecer %s\n", nom);
            } 
        }
    }
    
     
    




    return 0;
}}
