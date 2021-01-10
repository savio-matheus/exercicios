// Calcula uma média ponderada com quatro notas (duas para cada bimestre;
// com pesos 4 e 6) como nota semestral. (mais um problema ambíguo)

#include <stdio.h>
#include <stdlib.h>

main(){
float nota1, nota2;
float bim1, bim2, sem;

printf("Quais as notas do primeiro bimestre? ");
scanf("%f%f", &nota1, &nota2);

bim1 = ((nota1 * 4) + (nota2 * 6));

printf("Quais as notas do segundo bimestre? ");
scanf("%f%f", &nota1, &nota2);

bim2 = ((nota1 * 4) + (nota2 * 6));
sem = (bim1 + bim2) / 20;

printf("A media semestral sera %.2f pontos.\n", sem);
system("pause");
}