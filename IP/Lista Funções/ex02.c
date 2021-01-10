// Ex2 - Classificação do Aço
#include <stdio.h>

int classifica(int carbono, int dureza, int resist){
	if (carbono < 7 && dureza > 50 && resist > 80000){
		return 10;
	}
	else if (carbono < 7 && dureza > 50){
		return 9;
	}
	else if (carbono < 7){
		return 8;
	}
	else{
		return 7;
	}
}

int main(){
	int cc, dr, rt;
	scanf("%d%d%d", &cc, &dr, &rt);
	printf("ACO DE GRAU = %d\n", classifica(cc, dr, rt));
}
