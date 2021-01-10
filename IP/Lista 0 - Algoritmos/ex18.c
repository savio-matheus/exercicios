// Recebe a altura de um degrau e a altura a que se quer chegar em uma
// escada, em seguida calcula quantos degraus até essa altura.
#include <stdio.h>
#include <stdlib.h>

main(){
float degrau, altura;

printf("Insira a altura do degrau e a altura a alcançar (em metros): ");
scanf("%f%f", &degrau, &altura);

printf("A escada tera %.2f degraus.\n", (altura / degrau));
system("pause");
}