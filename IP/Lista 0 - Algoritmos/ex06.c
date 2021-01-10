// Calcula a área de um retângulo a partir
// dos numeros inseridos.
#include <stdio.h>

main(){
float lado1, lado2;

printf("Insira duas medidas para calcular a area: ");
scanf("%f%f", &lado1, &lado2);

printf("Area = %.2f", (lado1 * lado2));
}
