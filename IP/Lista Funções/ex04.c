// Ex4 - Número perfeito
#include <stdio.h>

int somaDivisores(int num){
	int divisor, soma = 1;
	
	printf("%d = 1", num);
	
	for (divisor = 2; divisor < num; divisor++){
		if (num % divisor == 0){
		    printf(" + %d", divisor);
		    soma += divisor;
		}
	}
	return soma;
}

void main(){
	int n, soma;
	
	scanf("%d", &n);
	
	soma = somaDivisores(n);
	
	if (soma == n){
		printf(" = %d (NUMERO PERFEITO)\n", soma);
	}
	else{
		printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);
	}
}
