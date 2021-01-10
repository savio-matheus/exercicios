//Recebe as bases e altura de um trapézio e calcula a área.
#include <stdio.h>
#include <stdlib.h>

main(){
float baseMaior, baseMenor, altura, area;

printf("Insira a base maior, menor e altura do trap%czio: ", 130);
scanf("%f%f%f", &baseMaior, &baseMenor, &altura);

area = ((baseMaior + baseMenor) * altura) / 2;

printf("%crea = %.2f.\n", 181, area);
system("pause");
}