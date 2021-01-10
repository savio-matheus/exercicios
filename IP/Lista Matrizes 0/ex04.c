// Ex4
#include <stdio.h>

void main(){
	int matriz[12][12], count = 0;
	double media = 0;
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n\n\n");
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			if(i < j && i + j < 11){
				printf("%d ", matriz[i][i]);
				media += matriz[i][j];
				count++;
			}
			else if(i > j && i + j > 11){
				printf("%d ", matriz[i][i]);
				media += matriz[i][j];
				count++;
			}
		}
	}
	printf("\n\n\n");
	printf("A media eh: %lf\n", (media / count));
}
