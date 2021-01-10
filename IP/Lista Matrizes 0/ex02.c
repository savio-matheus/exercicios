// Ex2
#include <stdio.h>

main(){
	int matriz[5][5];
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(i + j != 4){
				printf("%d ", matriz[i][i]);
			}
		}
	}
	
	printf("\n");
}
