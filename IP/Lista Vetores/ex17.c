// Contagem de elementos únicos - ex17
#include <stdio.h>

main(){
	int i, j;
	int n, unicos, pivo;
	scanf("%d", &n);
	unicos = n;
	int vetor[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < n; i++){
		pivo = i;
		for(j = 0; j < n; j++){
			if(i != j){
				if(vetor[i] == vetor[j]){
					unicos--;
					break;
				}
			}
		}
	}
	printf("%d\n", unicos);
}
