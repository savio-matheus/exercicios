// Recebe dois números, uma base e um expoente, e calcula a potência.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
float base, exp;

printf("Insira e um numero para a base e outro para o expoente: ");
scanf("%f%f", &base, &exp);

printf("%.f elevado a %.f resulta em %.2f.\n", base, exp, pow(base, exp));
system("pause");
}