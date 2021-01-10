/*Recebe um número positivo maior que zero e mostra esse número ^2
e sua raíz quadrada.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
int num, numQuadrado;
float numRaiz;

printf("Insira um n%cmero positivo e maior que 0: ", 163);
scanf("%d", &num);

numQuadrado = pow(num, 2);
numRaiz = sqrt(num);

printf("Quadrado: %d \nRa%cz: %.4f\n", numQuadrado, 161, numRaiz);
system("pause");
}