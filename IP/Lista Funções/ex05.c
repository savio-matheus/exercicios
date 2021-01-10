// Ex5 - Interceptos de x e y em uma reta
#include <stdio.h>

// x = -(n / m), y = 0, toca o eixo x;
double interceptoEmX (double m, double n){
	if (n == 0){
		return 0;
	}
	return (-(n / m));

}

// y = n, x = 0, toca eixo y.
double interceptoEmY (double m, double n){
	return n;
}

void main(){
	int testes, i;
	// y = xm + n
	double m, n;
	
	scanf("%d", &testes);
	
	for (i = 0; i < testes; i++){
		scanf("%lf%lf", &m, &n);
		
		printf("Intercepto em x: (%.2lf, 0.00)\n", interceptoEmX(m, n));
		printf("Intercepto em y: (0.00, %.2lf)\n", interceptoEmY(m, n));
	}
}
