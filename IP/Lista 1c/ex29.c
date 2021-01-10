// Procura por número amigo, L1c - 29
#include <stdio.h>

int somaDivisores(int num){
	int div, somaDiv = 0;
	
	for (div = 1; div <= (num / 2); div++){
		if (num % div == 0){
			somaDiv += div;
		}
	}
	return somaDiv;
}

main(){
	int i;
	int a = 1, b = 1, sumA = 0, sumB = 0;

	scanf("%d", &i);

	for (i; i > 0; i--){
		while((sumB != a || sumA != b) || (a == b)){
			b++;
			sumB = somaDivisores(b);
			for(a = 1; a < sumB; a++);

			sumA = somaDivisores(a);
//			printf("a = %d e b = %d\n", a, b);
		}

		if (sumA > sumB){
			printf("(%d,%d)\n", sumB, sumA);
		}
		else{
			i++;
		}
		a++;
	}
}
