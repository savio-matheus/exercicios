// Conversão de nota em conceito, L1b - 5
#include <stdio.h>
#include <math.h>

main(){
float nota;

scanf("%f", &nota);

if (nota > 10 || nota < 0){
    printf("TA DOIDO MANO?\n");
}
else if (nota >= 9.0 && nota <= 10.0){
    printf("NOTA = %.1f CONCEITO = A\n", truncf(nota * 10.0) / 10.0);
}
else if (nota >= 7.5 && nota < 9.0){
    printf("NOTA = %.1f CONCEITO = B\n", truncf(nota * 10.0) / 10.0);
}
else if (nota >= 6.0 && nota < 7.5){
    printf("NOTA = %.1f CONCEITO = C\n", truncf(nota * 10.0) / 10.0);
}
else {
    printf("NOTA = %.1f CONCEITO = D\n", truncf(nota * 10.0) / 10.0);
}

}