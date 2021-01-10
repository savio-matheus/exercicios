// CPF - ex18
#include <stdio.h>

main(){
	int t, i, j, cpf[11];
	int b1, b2;
	scanf("%d", &t);

	for(t; t > 0; t--){
		b1 = 0;
		b2 = 0;
		for(i = 0; i < 11; i++){
			scanf("%d", &cpf[i]);
		}

		for(i = 0; i < 9; i++){
			b1 += cpf[i] * (i + 1);
		}

		for(i = 0, j = 9; i < 9; i++, j--){
			b2 += cpf[i] * (j);
		}

		if(b1 % 11 == cpf[9] || (b1 % 11 == 10 && cpf[9] == 0)){
			if(b2 % 11 == cpf[10] || (b2 % 11 == 10 && cpf[10] == 0)){
				printf("CPF valido\n");
			}
		}
		else{
			printf("CPF invalido\n");
		}
	}
}