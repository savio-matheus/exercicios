// Quatro algarismos, L1a - 10
#include <stdio.h>

main(){
int num, novoNum;
int alg1, alg2, alg3, alg4;

scanf("%d", &num);

if(num > 999 || num < 100){
	printf("Assim nao vale.\n");
	return 0;
}

alg1 = num / 100;
alg2 = (num % 100) / 10;
alg3 = (num % 100) % 10;
alg4 = (alg1 + (alg2 * 3) + (alg3 * 5)) % 7;
novoNum = (num * 10) + alg4;

printf("O NOVO NUMERO E = %d\n", novoNum);

}
