// Recebe um valor (salário) e aumenta em 25%.
#include <stdio.h>
#define AUMENTO 0.25

main(){
float salario;

printf("Insira seu salario: ");
scanf("%f", &salario);

printf("Seu novo salario sera de %.2f reais.\n", (salario + (salario * AUMENTO)));
system("PAUSE");
}