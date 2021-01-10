// Série de Taylor para a função e^x, L1c - 31
#include <stdio.h>
#include <math.h>

main(){
    double x, fat = 1, pot, euler = 1;
    int n = 1, j;
    
    scanf("%lf %d", &x, &j);
    
    for (j, n; j > 0; j--, n++){
        fat *= n;
        pot = pow(x, n);
        euler += (pot / fat);
    }
    
    printf("e^%.2lf = %.6lf\n", x, euler);
}