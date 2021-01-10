// Companhia de teatro, L1c - 18
#include <stdio.h>
#include <math.h>

main(){
double vIngr, vInic, vFin, testVal, melhorVal = 0;
double lucro, despesa, ganho, maxLucro = 0;
int nIngr, mnIngr = 0;

scanf("%lf%lf%lf", &vIngr, &vInic, &vFin);

// Valida o intervalo
if (vInic >= vFin){
	printf("INTERVALO INVALIDO\n");
	return 0;
}

// Testa os resultados para cada valor do intervalo e armazena
// aquele que trouxer maior lucro e seus resultados.
for (testVal = vInic; testVal <= vFin; testVal++){
    // Com base no valor do ingresso, diz quantos serão vendidos.
    if (testVal < vIngr){
        nIngr = (truncf(vIngr - testVal) * 50) + 120;
    }
    else if (testVal > vIngr){
        nIngr = (truncf(vIngr - testVal) * 60) + 120;
    }
    else{
        nIngr = 120;
    }
    
    ganho = (nIngr * testVal);
    despesa = 200 + (0.05 * nIngr);
    lucro = ganho - despesa;
    
    printf("V: %.2lf, N: %d, L: %.2lf\n", testVal, nIngr, lucro);
    
    // Armazena os melhores resultados.
    if (lucro > maxLucro){
        maxLucro = lucro;
        melhorVal = testVal;
        mnIngr = nIngr;
    }
}

printf("Melhor valor final: %.2lf\n", melhorVal);
printf("Lucro: %.2lf\n", maxLucro);
printf("Numero de ingressos: %d\n", mnIngr);

}