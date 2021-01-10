// Recebe um valor como salário e outro como percentual de aumento;
// então calcula o novo salário com base nesse percentual.
#include <stdio.h>

main(){
float salario, percentual;

printf("Insira o salario e o percentual de aumento: ");
scanf("%f%f", &salario, &percentual);

salario = salario + (salario * (percentual / 100));

printf("Com aumento de %.2f%%, o novo salario eh: %.2f\n", percentual, salario);
system("PAUSE");
}