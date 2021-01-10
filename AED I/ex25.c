// 25 - Conversão de decimal para binário (recursivo)

#include <stdio.h>

void dec_bin(int numDec)
{
	if (numDec == 0) {
		return;
	}
	else {
		dec_bin((int) numDec / 2);
	}

	printf("%d", numDec % 2);
}

int main (void)
{
	int casos;
	int num;
	int i;

	scanf(" %d", &casos);
	for (i = 0; i < casos; i++) {
		scanf(" %d", &num);
		dec_bin(num);
		printf("\n");
	}
	return 0;
}

