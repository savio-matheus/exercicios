//Vetores - ex3
#include <stdio.h>

void main(){
	int vet1[10], vet2[10], inter[20];
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &vet1[i]);
	}
	for(int i = 0; i < 10; i++){
		scanf("%d", &vet2[i]);
	}

	for(int i = 0; i < 20; i += 2){
		inter[i] = vet1[i / 2];
	}
	for(int i = 1; i < 20; i += 2){
		inter[i] = vet2[i / 2];
	}
	
	for(int i = 0; i < 20; i++){
		printf("%d ", inter[i]);
	}
	
	printf("\n");
}
