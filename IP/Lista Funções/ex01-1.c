// Ex1 - Lê número
#include <stdio.h>

double media(int nInteiros){
	double media = 0, num;
	int i;
	
	for (i = 0; i < nInteiros; i++){
		scanf("%lf", &num);
		media += num;
	}
	return (media/i);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%.2lf\n", media(n));
}
