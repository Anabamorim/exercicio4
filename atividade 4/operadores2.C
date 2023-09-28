#include <stdio.h>

int main() {
    int A, B, C, D;

    // Solicita para inserir os valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    // Inicializa as variáveis para armazenar o maior e o menor valor
    int maior = A, menor = A;

    //  B é maior ou menor que as variáveis já verificadas
    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }

    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }
   
    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }

    // Imprime o maior e o menor valor
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

  
}
