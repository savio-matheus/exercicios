// Decolagem, L1a - 9
#include <stdio.h>
#include <math.h>

main(){
double massa, acel, tempo; // Em toneladas, m/s^2 e segundos.
double velMax, comprPista, trabalho; // Em km/h, metros e joules.
scanf("%lf%lf%lf", &massa, &acel, &tempo);

velMax = acel * tempo;
massa = (massa * 1000); // Converte toneladas em quilos.
comprPista = (acel * (tempo * tempo)) / 2;
trabalho = (massa) * (velMax * velMax) / 2;
velMax = (velMax * 3.6); // Converte m/s para km/h.

printf("VELOCIDADE = %.2lf\n", velMax);
printf("ESPACO PERCORRIDO = %.2lf\n", comprPista);
printf("TRABALHO REALIZADO = %.2lf\n", trabalho);
}