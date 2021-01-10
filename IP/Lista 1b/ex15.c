// Cálculo do imposto de renda, L1b - 15
#include <stdio.h>
#include <math.h>

main(){
int matricula, depende = 0;
float salmin, salfunc, impostoBruto = 0, impostoliq, taxaPaga;

scanf("%d %f %d %f %f", &matricula, &salmin, &depende, &salfunc, &taxaPaga);

// Determina quantos salários a pessoa recebe e determina o imposto bruto.
if (truncf(salfunc / salmin) > 12){
    impostoBruto += (0.2 * salfunc);
}
else if (truncf(salfunc / salmin) > 5 && truncf(salfunc / salmin) <= 12){
    impostoBruto += (0.08 * salfunc);
}

// Cálculo do valor pago e do imposto líquido.
taxaPaga /= 100;
taxaPaga = (salfunc * taxaPaga);
impostoliq = (impostoBruto - (depende * 300));

printf("MATRICULA = %d\n", matricula);
printf("IMPOSTO BRUTO = %.2f\n", impostoBruto);
printf("IMPOSTO LIQUIDO = %.2f\n", impostoliq);
printf("RESULTADO = %.2f\n", (impostoliq - taxaPaga));

// Quem paga quem, ou não.
if ((impostoliq - taxaPaga) < 0){
    printf("IMPOSTO A RECEBER\n");
}
else if ((impostoliq - taxaPaga) > 0){
    printf("IMPOSTO A PAGAR\n");
}
else{
    printf("IMPOSTO QUITADO\n");
}
}