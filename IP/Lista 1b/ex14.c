// Classificação do aço, L1b - 14
#include <stdio.h>
main(){
// Conteúdo de carbono, dureza Rockwell, resistência à tração.
int cc, dr, rt;
int grau;

scanf("%d%d%d", &cc, &dr, &rt);

if (cc < 7 && dr > 50 && rt > 80000){
    grau = 10;
}
else if (cc < 7 && dr > 50){
    grau = 9;
}
else if (cc < 7){
    grau = 8;
}
else{
    grau = 7;
}

printf("ACO DE GRAU  = %d\n", grau);

}