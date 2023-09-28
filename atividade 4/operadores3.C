#include <stdio.h>

int main() {
    int A, B, C;

    //inserir os valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    
    int variavel;

    //  valores em ordem ascendente 
    if (A > B) {
         variavel = A;
        A = B;
        B =  variavel;
    }
    if (A > C) {
         variavel = A;
        A = C;
        C =  variavel;
    }
    if (B > C) {
         variavel = B;
        B = C;
        C =  variavel;
    }

    
    printf("Valores em ordem ascendente: %d, %d, %d\n", A, B, C);

    return 0;
}
