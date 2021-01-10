// Calcula a quantidade de latas de tinta e seu custo, para pintar 
// uma quantidade a definir de cilindros, com altura e raio também
// a definir. A lata custa 50 reais e cada uma tem 5 litros.
// Cada litro de tinta cobre 3 metros quadrados.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415 // Para a base do cilindro.

main(){
int quCilindros;
float alt, raio, areaTotal;
float quLatas, prLatas;

printf("Sao quantos cilindros? ");
scanf("%d", &quCilindros);
printf("\nQuais sao a altura e o raio dos cilindros? ");
scanf("%f%f", &alt, &raio);

// Descobre a soma das áreas de todos os cilindros.
areaTotal = (PI * (raio * raio));
areaTotal = (areaTotal * 2) + ((2 * PI * raio) * alt);
areaTotal = areaTotal * quCilindros;
printf("Sao %.2f metros quadrados no total...\n\n", areaTotal);

// Calcula o número de latas e depois o preço.
quLatas = (areaTotal / 3) / 5;
printf("%.2f latas.\n", quLatas);
quLatas = ceil(quLatas);
printf("Arredondado: %.f latas.\n", quLatas);
prLatas = quLatas * 50;

printf("\n\nSerao %.f latas, ao custo total de %.2f reais.\n", quLatas, prLatas); 
system("pause");
}