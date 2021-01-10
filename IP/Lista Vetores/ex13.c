// Maior frequência - ex13
#include <stdio.h>
#define MAX 101
#define MIN -1

main(){
	int num = MAX, numFreq = 0, tamanhoVet, numTest = MIN, testFreq = 1, i, j;
	scanf("%d", &tamanhoVet);
	int vetor[tamanhoVet];

	for(i = 0; i < tamanhoVet; i++){
		scanf("%d", &vetor[i]);
	}

	for(i = 0; i < tamanhoVet; i++){
		numTest = vetor[i];
		testFreq = 1;
		for(j = 0; j < tamanhoVet; j++){
			if(vetor[i] == vetor[j] && i != j){
				testFreq++;
			}
		}
		if(testFreq > numFreq){
            num = numTest;
			numFreq = testFreq;
		}
        else if(testFreq == numFreq){
            if(num > numTest){
                num = numTest;
            }
        }
	}
	printf("%d\n", num);
	printf("%d\n", numFreq);
}