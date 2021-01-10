// Série de pares, L1c - 4
#include <stdio.h>

main(){
int x, y, i; // Os dois números e o contador.

scanf("%d%d", &x, &y);

if (x % 2 == 0){
	for (i = 0; i < y; i++){
		printf("%d ", x);
		x += 2;
	}
	
	printf("\n");
}
else{
	printf("O PRIMEIRO NUMERO NAO E PAR\n");
}

}
