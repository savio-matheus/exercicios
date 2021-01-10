// Máxima coordenada - ex20
#include <stdio.h>
#include <math.h>

double modulo(double x, double y){
	double mod = x - y;
	if(mod < 0){
		return (mod * -1);
	}
	else{
		return mod;
	}
}

main(){
	int i;
	int n;
	scanf("%d", &n);
	double X[n], x;
	double Y[n], y;
	double Z[n], z;

	for(i = 0; i < n; i++){
        scanf("%lf", &X[i]);
        scanf("%lf", &Y[i]);
        scanf("%lf", &Z[i]);
    }

    for(i = 1; i < n; i++){
    	x = modulo(X[i - 1], X[i]);

	    y = modulo(Y[i - 1], Y[i]);

	    z = modulo(Z[i - 1], Z[i]);

    	if(x >= y && x >= z){
            printf("%.2lf\n", x);
        }
        else if(y >= x && y >= z){
            printf("%.2lf\n", y);
        }
        else if(z >= x && z >= y){
            printf("%.2lf\n", z);
        }
    }
}