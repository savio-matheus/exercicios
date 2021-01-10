// Frequência e Maior
#include <stdio.h>

main(){
	int n, i, indice, maiorNota = 0, notaDeTeste, ocorrencias = 0;
	scanf("%d", &n);
	int notas[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &notas[i]);
		if(notas[i] > maiorNota){
			maiorNota = notas[i];
			indice = i;
		}
		if(i + 1 == n){
			notaDeTeste = notas[i];
		}
	}
	
	for(i = 0; i < n; i++){
		if(notaDeTeste == notas[i]){
			ocorrencias++;
		}
	}
	
	printf("Nota %d, %d vezes\n", notaDeTeste, ocorrencias);
	printf("Nota %d, indice %d\n", maiorNota, indice);
}
