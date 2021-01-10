// Recebe os coeficientes de uma equação do 2º grau e calcula suas raízes.
#include <stdio.h>
#include <math.h>

main(){
int a, b, c; // Coeficientes.
float delta;
float x1, x2; // Raízes.

printf("CALCULADORA DE EQUACOES DO SEGUNDO GRAU\n\n");
printf("insira os coeficientes da equacao (a, b e c): ");
scanf("%d%d%d", &a, &b, &c);

delta = (b * b) - (4 * a * c);

if(delta > 0){
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raizes sao %.2f e %.2f.\n", x1, x2);
}
else if(delta = 0){
    x1 = -b / (2 * a);
    x1 = x2;
    printf("Sendo delta = 0, a raiz eh %.2f.\n", x1);
}
else{
    printf("Essa equacao nao tem raizes reais!\n");
}

getchar();
return x1, x2;
}

// "Como em um instante tudo desaparece: no mundo, os próprios corpos,
// e no tempo, sua memória!" -Marco Aurélio.
