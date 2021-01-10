// 21 - Imprimindo números naturais recursivamente

#include <stdio.h>

void natural(int num, int limite)
{
	printf("%d", num);
	if (num < limite) {
		printf(" ");
		natural(num + 1, limite);
	}
	else {
		printf("\n");
	}
}

int main(void)
{
	int limite;

	scanf(" %d", &limite);
	natural(1, limite);

	return 0;
}
