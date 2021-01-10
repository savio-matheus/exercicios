// José (Lista 2)

#include <stdio.h>

void inverte(int* num)
{
	int c = (int) (*num / 100);
	int d = ((int) (*num / 10) % 10);
	int u = (*num % 10);
	*num = (u * 100) + (d * 10) + c;
}

int main(void)
{
	int numero1;
	int numero2;

	scanf(" %d%d", &numero1, &numero2);
	inverte(&numero1);
	inverte(&numero2);

	if(numero1 > numero2) printf("%d\n", numero1);
	else printf("%d\n", numero2);

	return 0;
}
