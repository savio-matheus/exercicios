// Número primo, L1c - 15
// Faz o caminho inverso: testa por não primos, caso não encontre, é primo.
#include <stdio.h>

main(){
int num, vezesDiv = 2, div;

scanf("%d", &num);

if (num == 2){
	printf("PRIMO\n");
	return 0;
}
else if (num == 1){
    printf("NAO PRIMO\n");
    return 0;
}
else if (num <= 0){
    printf("NAO PRIMO\n");
    return 0;
}

for (div = 2; div <= num/2; div++){
	if(num % div == 0){
		printf("NAO PRIMO\n");
        return 0;
	}
}

printf("PRIMO\n");
}