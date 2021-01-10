// Descrição de inteiros, L1b - 9
#include <stdio.h>

main(){
int num;
int mil = 0, cen = 0, dez = 0, uni = 0;

scanf("%d", &num);

if (num > 0 || num < 9999){
    // Quebra o número em algarismos separados.
    mil = (num / 1000);
    cen = (num % 1000) / 100;
    dez = ((num % 1000) % 100) / 10;
    uni = (((num % 1000) % 100) % 10);
    
    // Escreve a primeira parte da frase.
    if (num <= 9999 && num > 999){
        printf("(quarta ordem) %d = ", num);
    }
    else if (num <= 999 && num > 99){
        printf("(terceira ordem) %d = ", num);
    }
    else if (num <= 99 && num > 9){
        printf("(segunda ordem) %d = ", num);
    }
    else {
        printf("(primeira ordem) %d = ", num);
    }
    
    
    // Escreve as casas do número de forma gramaticalmente correta...
    if (mil == 1 && mil != 0) {
        printf("%d unidade de milhar + ", mil);
        }
    else if (mil != 0){
        printf("%d unidades de milhar + ", mil);
        }
    
    if (cen == 1 && cen != 0) {
        printf("%d centena + ", cen);
        }
    else if (cen != 0){
        printf("%d centenas + ", cen);
        }
    
    if (dez == 1 && dez != 0) {
        printf("%d dezena + ", dez);
        }
    else if (dez != 0){
        printf("%d dezenas + ", dez);
        }   

    if (uni == 1 && uni != 0) {
        printf("%d unidade ", uni);
        }
    else if (uni != 0){
        printf("%d unidades ", uni);
        }
    
    printf("= ");
    
// Números como 1000, 100 e 10 têm a frase terminando com "+"
// Não é bug, é feature.
    if (mil != 0){
        printf("%d + ", (mil * 1000));
    }
    if (cen != 0){
        printf("%d + ", (cen * 100));
    }
    if (dez != 0){
        printf("%d + ", (dez * 10));
    }
    if (uni != 0){
        printf("%d", uni);
    }
    
    printf("\n");
    
}
else{
    printf("Numero invalido!\n");
}

}