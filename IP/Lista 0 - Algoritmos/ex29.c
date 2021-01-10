// Calcula o reajuste de um salário com base nnum percentual fornecido.
#include <stdio.h>
#include <stdlib.h>

main(){
float salario, reajuste, nSalario;

printf("Insira o salario e o reajuste pretendido (numeros inteiros): ");
scanf("%f%f", &salario, &reajuste);

nSalario = salario + (salario * (reajuste / 100));

printf("%.2f reais vai para %.2f reais.\n", salario, nSalario);
system("pause");
}