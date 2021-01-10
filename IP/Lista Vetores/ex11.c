// Inverte vetor - ex11
#include <stdio.h>
#define INT_MAX 2147483646
#define INT_MIN -2147483647

main(){
	int n, v, w, temp, maior = INT_MIN, menor = INT_MAX;
	scanf("%d", &n);
	
	int V[n], W[n];
	
	w = n - 1;
	v = 0;
	while(v < n){
		scanf("%d", &temp);
		V[v] = temp;
		W[w] = temp;
		v++;
		w--;
		
		if(temp < menor){
			menor = temp;
		}
		
		if(temp > maior){
			maior = temp;
		}
	}
	
	for(v = 0; v < n; v++){
		printf("%d", V[v]);
		if(v + 1 < n){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}

	for(w = 0; w < n; w++){
		printf("%d", W[w]);
		if(w + 1 < n){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
	printf("%d\n", maior);
	printf("%d\n", menor);
}
