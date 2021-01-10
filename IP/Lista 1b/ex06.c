// Reajuste salarial, L1b - 6
#include <stdio.h>
#include <math.h>

main(){
float salario, novoSal;

scanf("%f", &salario);

if (salario <= 300.00 && salario > 0){
    novoSal = (salario * 0.5) + salario;
    printf("SALARIO COM REAJUSTE = %.2f\n", truncf(novoSal * 100.00) / 100.00);
}
else if (salario > 300.00){
    novoSal = (salario * 0.3) + salario;
    printf("SALARIO COM REAJUSTE = %.2f\n", truncf(novoSal * 100.00) / 100.00);
}
else{
    printf("TA DEVENDO MANO?");
}

}