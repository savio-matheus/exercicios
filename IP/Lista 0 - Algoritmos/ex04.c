// Calcula quantos dia uma pessoa viveu com base
// na sua idade.
#include <stdio.h>

main(){
int idade;

printf("Quantos anos voce tem? ");
scanf("%d", &idade);

printf("Entao voce ja viveu %.2f dias!", (idade * 365.25));
// O valor 365.25 é quebrado para considerar os anos bissextos.
}
