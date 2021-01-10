// Vetores - ex1
#include <stdio.h>

void main(){
	int vet[10];
	int vet2[10];
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
	}
	
	for(int i = 0; i < 10; i++){
		if(vet[i] < 0){
			vet2[i] = 1;
		}
		else{
			vet2[i] = vet[i];
		}
	}
	
	for(int i = 0; i < 10; i++){
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	for(int i = 0; i < 0; i++){
		printf("vet2[%d]: %d\n", i, vet2[i]);
	}
}
