// Ex5
#include <stdio.h>

void main(){
	int matriz[8][8], diferente = 0;
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%d ", matriz[j][i]);
			if(matriz[i][j] != matriz[j][i]){
				diferente = 1;
			}
		}
		printf("\n");
	}
	
	if(diferente){
		printf("Nao eh simetrica!\n");
	}
	else{
		printf("Eh simetrica");
	}
}
