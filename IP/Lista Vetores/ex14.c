// Mediana - ex14
#include <stdio.h>

main(){
	int min, i, j, temp;
	int n;
	double mediana;
	scanf("%d", &n);
	int vetor[n];

	for(i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}

// Selection sort
	for(i = 0; i < n; i++){
		min = i;
		for(j = i + 1; j < n; j++){
			if(vetor[j] < vetor[min]){
				min = j;
			}
		}
		temp = vetor[i];
		vetor[i] = vetor[min];
		vetor[min] = temp;
	}
// --------------

	if(n % 2){
		mediana = vetor[((n - 1) / 2)];
		printf("%.2lf\n", mediana);
	}
	else{
		n /= 2;
		mediana = (vetor[n - 1] + vetor[n]);
		printf("%.2lf\n", mediana / 2);
	}
}