// Ex7 - Raízes da Equação de 2º Grau
#include <stdio.h>
#include <math.h>

int raizesEq2Grau(double a, double b, double c){
	double delta;
	delta = (b * b) - (4 * a * c);
	
	if (delta > 0){
		return 2;
	}
	else if (delta == 0){
		return 1;
	}
	else{
		return 0;
	}
}

void main(){
	double a, b, c;
	double x1, x2, delta;
	int tipoRaiz;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	
	tipoRaiz = raizesEq2Grau(a, b, c);
	delta = (b * b) - (4 * a * c);
	printf("%lf\n\n", delta);
	
	if (tipoRaiz == 2){
		x1 = ((-1 * b) + delta) / (2 * a);
		x2 = ((-1 * b) - delta) / (2 * a);
		printf("RAIZES DISTINTAS\n");
		printf("X1 = %.2lf\n", x1);
		printf("X2 = %.2lf\n", x2);
	}
	else if (tipoRaiz == 1){
		x1 = -(b) / 2 * a;
		printf("RAIZ UNICA\n");
		printf("X1 = %.2lf\n", x1);
	}
	else{
		printf("RAIZES IMAGINARIAS\n");
	}
	
}
