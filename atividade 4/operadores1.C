#include<stdio.h>
#include<math.h>
main(){

float numero, resultado;

printf("Digite um numero:");
scanf("%f", &numero);

if(numero > 0){
    //raiz
    resultado = sqrt(numero);
    printf("Raiz: %f", resultado);

}else{
    //quadrado 
    resultado = pow(numero, 2);
    printf("Raiz: %f", resultado);

}

}