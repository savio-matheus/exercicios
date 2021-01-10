// Cálculo raiz quadrada, L1c - 17
#include <stdio.h>

main(){
double num, margemErro, erroMod, r = 1;

scanf("%lf%lf", &num, &margemErro);

do{
    r = (r + (num / r)) / 2;
    erroMod = (num - (r * r));
    if (erroMod < 0){
        erroMod *= -1;
    }
    
    printf("r: %.9lf, erro: %.9lf\n", r, erroMod);
    
}while (erroMod > margemErro);

}