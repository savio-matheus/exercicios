// Sistemas de Equações Lineares, L1a - 13
#include <stdio.h>
#include <math.h>

main(){
float a, b, c, d, e, f;
float D, Dx, Dy, X, Y;

scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

D = (a * e) - (b * d);
Dx = (c * e) - (b * f);
Dy = (a * f) - (c * d);
X = Dx / D;
Y = Dy / D;

printf("O VALOR DE X E = %.2f\n", truncf(X * 100) / 100);
printf("O VALOR DE Y E = %.2f\n", truncf(Y * 100) / 100);
}

// ax + by = c
// dx + ey = f