// Conversão de temperatura, L1c - 2
#include <stdio.h>

main(){
double fah, cel;
int repete, i;

scanf("%d", &repete);

for (i = 0; i < repete; i++){
	scanf("%lf", &fah);
	
	cel = ((fah - 32) * 5) / 9;
	
	printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fah, cel);
}

}
