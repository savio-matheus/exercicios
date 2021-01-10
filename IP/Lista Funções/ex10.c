// Ex10 - Valor em Notas e Moedas
#include <stdio.h>

void converteEmNotasMoedas(int valor, int c, int ci, int d, int u){
	c = valor / 100;
	ci = (valor % 100) / 50;
	d = ((valor % 100) - (ci * 50)) / 10;
	u = (valor % 100) % 10;
	
	printf("NOTAS DE 100 = %d\n", c);
	printf("NOTAS DE 50 = %d\n", ci);
	printf("NOTAS DE 10 = %d\n", d);
	printf("MOEDAS DE 1 = %d\n", u);
}

void main(){
	int valor;
	scanf("%d", &valor);
	
	converteEmNotasMoedas(valor, 0, 0, 0, 0);
}
