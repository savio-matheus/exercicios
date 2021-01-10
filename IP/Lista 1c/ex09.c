// Fatorial, L1c - 9
#include <stdio.h>
main(){
long int num, fat = 1, i;

scanf("%ld", &num);

i = num;

for (i; i != 0; i--){
	fat *= i;
}

printf("%ld! = %ld\n", num, fat);
}