//Lê trẽs números e determina o maior e o menor entre eles.
#include <stdio.h>

main(){
int A, B, C;

printf("Insira três numeros: ");
scanf("%d%d%d", &A, &B, &C);

if (A == B && A == C){
    printf("JOVEM! Use numeros diferentes!\n");
    return;
    }

if (A > B && B > C){
    printf("%d eh o maior e %d eh o menor.", A, C);
    }
else (A < C){

    }
}
