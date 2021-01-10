// Quadrado de pares, L1c - 3
#include <stdio.h>

main(){
int num, cp = 1;

scanf("%d", &num);

if (num > 5 && num < 2000){
	while (cp <= num){
		if (cp % 2 == 0){
			printf("%d^2 = %d\n", (cp), (cp * cp));
		}
		cp++;
	}
}

}
