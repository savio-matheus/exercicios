// Ex3
#include <stdio.h>

void main(){
	int matriz[5][5];
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if((i + j) % 2 == 0){
				printf("%d ", matriz[i][j]);
			}
		}
	}
	printf("\n");
}
