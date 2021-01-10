// Converte uma dada temperatura de ºF para ºC.
#include <stdio.h>
#include <stdlib.h>

main(){
float farenheit, celsius;

printf("Quantos graus F? ");
scanf("%f", &farenheit);

celsius = (farenheit - 32) / 1.8;

printf("Isso equivale a %.2f graus C.\n", celsius);
system("pause");
}