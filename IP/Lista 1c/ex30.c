// Série de Taylor para a função cosseno, L1c - 30
// cos(x) = 1 - x /2! + x /4! - x /6! + x /8! + ...
#include <stdio.h>
#include <math.h>

main(){
    double cos = 1, x, fat = 1, pot = 0;
    int n, i = 2, sinal = -1;
    
    scanf("%lf %d", &x, &n);
    
    for (n, i; n > 0; n--, i += 2){
        pot = pow(x, i);
        fat *= i * (i - 1);
        cos += (sinal) * (pot / fat);
        sinal = -(sinal);
    }
    
    printf("cos(%.2lf) = %.6lf\n", x, cos);
}