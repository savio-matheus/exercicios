// Ex9 - Triângulo ou trapézio?
#include <stdio.h>

int E_Triangulo(double A, double B, double C){
	if ((A + B) > C && (A + C) > B && (B + C) > A){
		return 1;
	}
	else{
		return 0;
	}
}

double Perimetro(double A, double B, double C){
	return (A + B + C);
}

double areaTrapezio(double A, double B, double C){
	return (((A + B) * C) / 2);
}

void main(){
	double A, B, C;

	scanf("%lf%lf%lf", &A, &B, &C);

	if (E_Triangulo(A, B, C) == 1){
		printf("Perimetro = %.1lf\n", Perimetro(A, B, C));
	}
	else{
		printf("Area = %.1lf\n", areaTrapezio(A, B, C));
	}

}
