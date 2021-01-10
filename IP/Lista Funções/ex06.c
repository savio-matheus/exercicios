//Ex6 - Número invertido
#include <stdio.h>

int separaDigitos(int n){
	int c, d, u;
	
	c = n / 100;
	d = (n % 100) / 10;
	u = (n % 10);
	
	return ((u * 100) + (d * 10) + c);
}

void main(){
	int num;
	
	scanf("%d", &num);
	
	printf("%d\n", separaDigitos(num));
}
