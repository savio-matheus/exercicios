// Menor distância - ex15
#include <stdio.h>
#define INT_MAX 2147483647

int modulo(int x, int y){
	int mod = x - y;
	if(mod < 0){
		return (mod * -1);
	}
	else{
		return mod;
	}
}

void distancia(){
	int n, i, j, dist = INT_MAX, mod;
	scanf("%d", &n);
	int vetor[n];

	for(i = 0; i < n; i++) scanf("%d", &vetor[i]);

	for(i = 0; i < n; i++){
		for(j = (i + 1); j < n; j++){
			mod = modulo(vetor[i], vetor[j]);
			if(mod < dist){
				dist = mod;
			}
		}
	}

	printf("%d ", dist);
	printf("%d\n", (n * n));
}

main(){
	int t, dist;
	scanf("%d", &t);

	for(t; t > 0; t--){
		distancia();
	}
}