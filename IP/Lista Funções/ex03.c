// Ex 3 - Quermesse
#include <stdio.h>

int sorteia(int posicao, int numIngresso){
	if (posicao == numIngresso){
		return numIngresso;
	}
	else{
		return 0;
	}
}

void main(){
	int repeticoes, ganhador = 0, numIngresso, teste = 0, i;
	
	while(1){
		// Garante que o número de pessoas não passe 200.
		do{
			scanf("%d", &repeticoes);
		}while(repeticoes > 200);
		
		// Se forem "0 pessoas", então acaba o programa.
		if (repeticoes == 0) break;
		
		teste++;
		
		for (i = 1; i <= repeticoes; i++){
			scanf("%d", &numIngresso);
			ganhador = sorteia(i, numIngresso);
			
			
			if (ganhador > 0){
				printf("Teste %d\n", teste);
				printf("%d\n\n", ganhador);
			}
		}
	}
}
