// Transcrição de datas, L1b - 13
#include <stdio.h>

int main(){

int data;
int dia, mes, ano;

scanf("%d", &data);

// Primeiro, separar os números correspondentes ao dia, mês e ano.
dia = (data / 1000000);
mes = (data / 10000) % 100;
ano = (data % 10000);

// Testar sua validade e construir a transcrição.
switch (mes) {
    case 1:
        if (dia <= 31 && dia >= 1){
            printf("%d de janeiro de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;

    case 2:
        if (dia <= 28 && dia >= 1){
            printf("%d de fevereiro de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 3:
        if (dia <= 31 && dia >= 1){
            printf("%d de março de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;

    case 4:
        if (dia <= 30 && dia >= 1){
            printf("%d de abril de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 5:
        if (dia <= 31 && dia >= 1){
            printf("%d de maio de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 6:
        if (dia <= 30 && dia >= 1){
            printf("%d de junho de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 7:
        if (dia <= 31 && dia >= 1){
            printf("%d de julho de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 8:
        if (dia <= 31 && dia >= 1){
            printf("%d de agosto de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 9:
        if (dia <= 30 && dia >= 1){
            printf("%d de setembro de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 10:
        if (dia <= 31 && dia >= 1){
            printf("%d de outubro de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 11:
        if (dia <= 30 && dia >= 1){
            printf("%d de novembro de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    case 12:
        if (dia <= 31 && dia >= 1){
            printf("%d de dezembro de %d\n", dia, ano);
        }
        else {
            printf("Data invalida!\n");
            return 0;
        }
        break;
        
    default:
        printf("Data invalida!\n");
}

return 0;

}