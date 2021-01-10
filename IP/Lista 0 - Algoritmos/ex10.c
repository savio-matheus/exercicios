/* Insere-se um salário base sobre o qual o programa adiciona 5% de
gratificação e depois retira 7% em impostos (problema ambíguo).*/
#include <stdio.h>
#define BONUS 0.05
#define IMPOSTO 0.07

main(){
	float salario;
	
	printf("Insira o salario: ");
	scanf("%f", &salario);
	
	salario += (salario * BONUS);
	salario -= (salario * IMPOSTO);
	
	printf("Contando graficacao e impostos: %.2f reais.\n", salario);
	system("PAUSE");
}