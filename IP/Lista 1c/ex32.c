// Série de Taylor para a função seno, L1c - 32
#include <stdio.h>
#include <math.h>

main(){
    double x, sen, pot, fat = 1;
    int n = 3, j, sinal = -1;
    
    scanf("%lf %d", &x, &j);
    sen = x;
    
    for (n, j; j > 0; j--, n += 2){
        pot = pow(x, n);
        fat *= n * (n - 1);
        sen += sinal * (pot / fat);
        sinal = -(sinal);
    }
    
    printf("seno(%.2lf) = %.6lf\n", x, sen);
}