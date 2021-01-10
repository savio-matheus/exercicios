// Mostra o percentual de votos brancos, nulos e válidos em relação
// ao total.
#include <stdio.h>
#include <stdlib.h>

main(){
float brancos, nulos, validos;
int total;

printf("Insira o numeros de votos brancos, nulos e brancos: ");
scanf("%f%f%f", &brancos, &nulos, &validos);

total = (brancos + nulos + validos);
// Substitui pelo percentual
brancos = (brancos / total) * 100;
nulos = (nulos / total) * 100;
validos = (validos / total) * 100;

printf("\nDo total de %d votos:\n", total);
printf("%.f%% sao brancos;\n", brancos);
printf("%.f%% sao nulos;\n", nulos);
printf("e %.f%% sao validos.\n", validos);
system("pause");
}