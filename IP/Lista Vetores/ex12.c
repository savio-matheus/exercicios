// Ordena Lista - ex12
#include <stdio.h>

void selection_sort(int tamanho, int *vetor){
	int min, i, j, temp;

	for(i = 0; i < tamanho; i++){
		min = i;
		for(j = i + 1; j < tamanho; j++){
			if(vetor[j] < vetor[min]){
				min = j;
			}
		}
		temp = vetor[i];
		vetor[i] = vetor[min];
		vetor[min] = temp;
	}

	for(i = 0; i < tamanho; i++){
		printf("%d\n", vetor[i]);
	}
}

main(){
	int n, i;
	scanf("%d", &n);
	int vetor[n];

	for(i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}

	selection_sort(n, vetor);
}