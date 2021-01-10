// Ex8 - José
#include <stdio.h>

int inverte(int n){
	int c, d, u;
	
	c = n / 100;
	d = (n % 100) / 10;
	u = (n % 10);
	
	return ((u * 100) + (d * 10) + c);
}

void main(){
	int a, b, testes;
	
	scanf("%d", &testes);
	
	for (testes; testes > 0; testes--){
		scanf("%d%d", &a, &b);
		a = inverte(a);
		b = inverte(b);
		
		if (a >= b){
			printf("%d\n", a);
		}
		else{
			printf("%d\n", b);
		}
	}
}
