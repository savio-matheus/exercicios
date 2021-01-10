// Arrecadação de jogos, L1c - 1
#include <stdio.h>

main(){
double pop, geral, arqui, cad, renda;
int publico, numJogos, i;

scanf("%d", &numJogos);

for (i = 1; numJogos >= i; i++){
	scanf("%d%lf%lf%lf%lf", &publico, &pop, &geral, &arqui, &cad);
	
	pop = ((pop / 100) * publico); // 1 conto por ingresso.
	geral = ((geral / 100) * publico) * 5; // 5 por ingresso.
	arqui = ((arqui / 100) * publico) * 10; // Adivinha só
	cad = ((cad / 100) * publico) * 20;
	
	renda = (pop + geral + arqui + cad);
	
	printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda);
}

}
