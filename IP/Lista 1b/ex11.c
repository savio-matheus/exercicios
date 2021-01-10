// Raízes de equações de segundo grau, L1b - 11
#include <stdio.h>
#include <math.h>

main(){
float a, b, c, delta; // Coeficientes
float x1, x2;

scanf("%f%f%f", &a, &b, &c);

delta = (b * b) + (-4 * a * c);

if (delta > 0){
    delta = sqrt(delta);
    x1 = ((-1 * b) + delta) / (2 * a);
    x2 = ((-1 * b) - delta) / (2 * a);
    
    printf("RAIZES DISTINTAS\n");
    printf("X1 = %.2f\nX2 = %.2f\n", x2, x1);
}
else if (delta == 0){
    x1 = (-1 * b) / (2 * a);
    
    printf("RAIZ UNICA\n");
    printf("X1 = %.2f\n", x1);
}
else{
    printf("RAIZES IMAGINARIAS\n");
}
}