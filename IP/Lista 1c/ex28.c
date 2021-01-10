// Transforma decima em fração, L1c - 28
#include <stdio.h>
#include <math.h>

// Por exemplo, transforma 12.501 em 12501.
int decParaInt(double num){
	double real = num;
	int inteira;
	
	while ((truncf(real) - real) < 0){
		real *= 10;
		inteira = truncf(real);
	}
	
	return inteira;
}

// Diz quantos alagarismos != 0 há na parte fracionária de um número.
int contaAlgFrac(double num){
	double decimal, real = num;
	int algarismos = 0;
	
	while ((truncf(real) - real) < 0){
		real *= 10;
		algarismos++;
	}
	
	return algarismos;
}

main(){
	double numDecimal;
	int numerador, denominador, potencia, div = 1;
	
	scanf("%lf", &numDecimal);
	
	numerador = decParaInt(numDecimal);
	denominador = pow(10, contaAlgFrac(numDecimal));
	
    // Por algum motivo pow() retorna 99 ao invés de 100 quando
    // contaAlgFrac(numDecimal) retorna 2. Então soma 1 nesses casos.
    if (denominador == 99){
        denominador++;
    }
    
    // Simplifica a fração
    while (div <= denominador/2){
        if (numerador % div == 0 && denominador % div == 0){
            numerador /= div;
            denominador /= div;
        }
        div++;
    }
	
	printf("%d/%d\n", numerador, denominador);
}