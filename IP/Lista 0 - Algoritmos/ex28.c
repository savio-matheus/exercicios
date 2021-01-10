// Converte cm para km.
#include <stdio.h>
#include <stdlib.h>

main(){
float centi;

printf("Insira a distancia em centimetros: ");
scanf("%f", &centi);

printf("Isso equivale a %.5f km.\n", (centi / 100000));
system("pause");
}