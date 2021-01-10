// Cálculo da área de um triângulo, L1a - 7
#include <stdio.h>
#include <math.h>

main(){
double l1, l2, l3;
double T, area;

scanf("%lf%lf%lf", &l1, &l2, &l3);

// Checa se é triângulo e prossegue com o cálculo se verdadeiro.
if (((l1 + l2) > l3 && (l1 + l3) > l2 && (l2 + l3) > l1) || (l1 == l2 && l2 == l3)){
    T = (l1 + l2 + l3) / 2;
    area = sqrt(T * (T - l1) * (T - l2) * (T - l3));
    
    printf("A AREA DO TRIANGULO E = %.2lf", area);
}
else {
    printf("NAO E TRIANGULO\n");
}

}