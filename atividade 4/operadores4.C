#include <stdio.h>

int main() {
    int A, B, C, D;

    //inserir os valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

   
    int maior = A, menor = A;

    // B é maior ou menor que as já verificadas
    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }

    // C é maior ou menor que as já verificadas
    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }

    //  D é maior ou menor que as já verificadas
    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }

    // Imprime o maior e o menor valor
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}
