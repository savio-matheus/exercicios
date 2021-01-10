// Recebe três numeros e calcula sua média
// aritmética.
#include <stdio.h>

main(){
float num1, num2, num3;

printf("Insira tre numeros: ");
scanf("%f%f%f", &num1, &num2, &num3);

printf("A media eh: %.2f", ((num1 + num2 + num3) / 3));
}
