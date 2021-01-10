//Divide dois números inseridos pelo usuário.

#include <stdio.h>

main(){
	float num1, num2, resulta;

	printf("Escreva dois numeros inteiros para serem divididos: ");
	scanf("%f%f", &num1, &num2);

	resulta = num1 / num2;

	printf("A divisão resulta em: %.2f", resulta);
}
