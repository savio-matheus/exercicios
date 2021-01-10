// Aprovado ou reprovado, L1b - 1
#include <stdio.h>
#include <math.h>

main(){
float nota1, nota2, nota3;
float media;

scanf("%f%f%f", &nota1, &nota2, &nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 6){
    printf("MEDIA = %.2f\n", truncf(media * 100.0) / 100.0);
    printf("APROVADO\n");
}
else {
    printf("MEDIA = %.2f\n", truncf(media * 100.0) / 100.0);
    printf("REPROVADO");
}
}