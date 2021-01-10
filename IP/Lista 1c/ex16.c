// Salário, L1c - 16
#include <stdio.h>

main(){
int matricula, horas;
double ganhoHora, salario;

while(1){
    scanf("%d %d %lf", &matricula, &horas, &ganhoHora);
    if (matricula == 0 || horas == 0 || ganhoHora == 0){
        break;
    }
    
    salario = (horas * ganhoHora);
    
    printf("%d %.2lf\n", matricula, salario);
}
}