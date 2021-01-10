//Recebe o raio e calcula a área de um círculo
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

main(){
float raio;

printf("Raio do c%crculo (em cm): ", 161);
scanf("%f", &raio);

printf("%crea = %.2f cent%cmetros.\n", 181, ((raio * raio) * PI), 161);

system("pause");
}