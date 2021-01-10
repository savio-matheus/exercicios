// Ex1 alternativa - Lê número
#include <stdio.h>

double le_numero(){
	double n;
	scanf("%lf", &n);
	return n;
}

int main(){
	double media = 0, num, n;
	int i;
	
	n = le_numero();
	
	for (i = 0; i < n; i++){
		num = le_numero();
		media += num;
	}
	
	printf("%.2lf\n", (media / n));
	
}
