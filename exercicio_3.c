#include <stdio.h>

int main(){
    int a, b, c;
    a = b = c = 10;
    b = b + c;
    a = 20;
    printf("o valor de a = %d,\no valor de b = %d,\no valor de c = %d,\n", a, b, c );

    if (a != b){
        a= a + 10;
        ("sao diferentes\n");
        printf("o valor de a  = %d\n", a);
        
        
    } else {
        
        printf("a e b sao iguais\n");
    }
    

    return 0;
}

