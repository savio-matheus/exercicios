//Calcula a diferença entre dois valores inseridos.
#include <stdio.h>

main(){
int idade1, idade2;

printf("Quantos anos voce tem? ");
scanf("%d", &idade1);

printf("Quantos anos tem seu pai? ");
scanf("%d", &idade2);

printf("Ele eh %d anos mais velho do que voce", (idade2 - idade1));
}
