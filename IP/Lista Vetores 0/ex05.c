// Vetores 5 - ex5
#include <stdio.h>

long int fatorial(int n){
	long int fat = 1;
	for(n; n > 0; n--){
		fat *= n;
	}
	return fat;
}

void main(){
	int nums[10];
	long int fats[10];
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &nums[i]);
		fats[i] = fatorial(nums[i]);
	}
	
	for(int i = 0; i < 10; i++){
		printf("%ld\n", fats[i]);
	}
}
