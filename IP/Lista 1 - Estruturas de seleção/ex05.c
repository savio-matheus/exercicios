#include <stdio.h>

main(){
int numTest;

printf("Insira um numero: ");
scanf("%d", &numTest);

if(numTest % 2 == 0){
    printf("%d eh par!\n", numTest);
    }
else{
    printf("%d eh impar!\n", numTest);
    }
}
