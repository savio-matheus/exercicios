/* Recebe os valores salário mínimo e salário de um funcionário,
em seguida calcula quantos salário mínimos este funcionário ganha.*/
#include <stdio.h>
#include <stdlib.h>

main(){
float salMin, salFunc;

printf("Insira o valor atual do salario minimo e quanto voce ganha: ");
scanf("%f%f", &salMin, &salFunc);

printf("Voce ganha %.2f salario(s) minimo(s).\n", (salFunc / salMin));

system("PAUSE");
}