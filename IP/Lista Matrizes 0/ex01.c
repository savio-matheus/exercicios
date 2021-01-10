// Ex1
#include <stdio.h>

main(){
	int matriz[10][10], soma = 0;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			scanf("%d", &matriz[i][j]);
			if(i < j){
				soma += matriz[i][j];
			}
		}
	}
	printf("Soma dos elementos acima da diagonal principal: %d\n", soma);
}
