// Elementos únicos - ex19
#include <stdio.h>

main(){
	int n, i, foi;
	scanf("%d", &n);
	int numeros[n];

	for(i = 0; i < n; i++){
		scanf("%d", &numeros[i]);
	}

	for(i = 0; i < n; i++){
		if(numeros[i] != numeros[i - 1] && i){
			printf("%d\n", numeros[i]);
		}
		else if(!i){
			printf("%d\n", numeros[i]);
		}
	}
}