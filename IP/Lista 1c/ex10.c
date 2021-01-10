// Gerador de tabuada, L1c - 10
#include <stdio.h>

main(){
double num, num2, intervalo, temp;
int repete, i;

scanf("%lf %lf %d %lf", &num, &num2, &repete, &intervalo);

// Imprime a tabuada da soma
temp = num2;
printf("Tabuada de soma:\n");
for (i = 0; i < repete; i++){
    printf("%.2lf + %.2lf = %.2lf\n", num, temp, (num + temp));
    temp += intervalo;
}

// Imprime a tabuada de subtração
temp = num2;
printf("Tabuada de subtracao:\n");
for (i = 0; i < repete; i++){
    printf("%.2lf - %.2lf = %.2lf\n", num, temp, (num - temp));
    temp += intervalo;
}

// Imprime a tabuada de multiplicação
temp = num2;
printf("Tabuada de multiplicacao:\n");
for (i = 0; i < repete; i++){
    printf("%.2lf x %.2lf = %.2lf\n", num, temp, (num * temp));
    temp += intervalo;
}

// Imprime a tabuada de divisão
temp = num2;
printf("Tabuada de divisao:\n");
for (i = 0; i < repete; i++){
    printf("%.2lf / %.2lf = %.2lf\n", num, temp, (num / temp));
    temp += intervalo;
}

}