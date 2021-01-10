// 22 - Sequência de Fibonacci

#include <stdio.h>

void fibonacci(int a1, int a2, int termos)
{
	if (termos <= 0) {
		printf("\n");
		return;
	}

	printf(" %d", a2);
	fibonacci(a2, a1 + a2, termos - 1);
}


int main(void)
{
	int termos;

	scanf(" %d", &termos);
	printf("0");
	fibonacci(0, 1, termos);
	return 0;
}
