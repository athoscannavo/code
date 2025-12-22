#include <stdio.h>

int main(void){

/*
Atribuição com Soma (+=)
Atribuição com subtração (-=)
Atribuição com multiplicação (*=)
Atribuição com Divisão (/=)
*/




int numero1 = 10, numero2 = 0, resultado;

resultado = 10;
printf("Resultado: %d\n", resultado);

// resultado = resultado + 20;
resultado += 20;
printf("Resultado: %d\n", resultado);

// resultado = resultado + 20;
resultado -= 20;
printf("Resultado: %d\n", resultado);

// resultado = resultado * 5;
resultado *= 5;
printf("Resultado: %d\n", resultado);

// resultado = resultado /2;
resultado /= 2;
printf("Resultado: %d\n", resultado);


	return 0;

}