// Calcula o aumento de um salário com base em uma tabela de valores e
// e mostra o novo total.
#include <stdio.h>
#include <stdlib.h>

main(){
char jogador[32];
float salario, novoSalario;

printf("Nome do jogador: ");
scanf("%s", jogador);
printf("Quanto ele ganha atualmente? ");
scanf("%f", &salario);

if(salario <= 900){
    novoSalario = salario + (salario * 0.2);
    printf("O jogador tera aumento de R$%.2f e passara a receber R$%.2f.\n", (salario * 0.2), novoSalario);
}
else if(salario > 900 && salario <= 1300){
    novoSalario = salario + (salario * 0.15);
    printf("O jogador tera aumento de R$%.2f e passara a receber R$%.2f.\n", (salario * 0.15), novoSalario);
}
else if(salario > 1300 && salario <= 1800){
    novoSalario = salario + (salario * 0.1);
    printf("O jogador tera aumento de R$%.2f e passara a receber R$%.2f.\n", (salario * 0.1), novoSalario);
}
else{
    novoSalario = salario + (salario * 0.05);
    printf("O jogador tera aumento de R$%.2f e passara a receber R$%.2f.\n", (salario * 0.05), novoSalario);
}

system("pause");
}