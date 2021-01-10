// 26 - Fatorial duplo

#include <stdio.h>

int fatorial_duplo(int n)
{
	if (n <= 1) {
		return 1;
	}
	return (n * fatorial_duplo(n - 2));
}

int main (void)
{
	int numero;

	scanf(" %d", &numero);
	if (numero % 2 == 0)
		numero--;
	printf("%d\n", fatorial_duplo(numero));
	return 0;
}

