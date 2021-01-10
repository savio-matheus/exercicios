// Ordena 4 números, L1b - 18
#include <stdio.h>

main(){
float temp;
float numero[4];
int i, j;

scanf("%f%f%f%f", &numero[0], &numero[1], &numero[2], &numero[3]);

for (j = 0; j < 3; j++){
    for (i = 0; i < 3; i++){
        if (numero[i + 1] < numero[i]){
            temp = numero[i];
            numero[i] = numero[i + 1];
            numero[i + 1] = temp;
        }
    }
}

printf("%.2f, %.2f, %.2f, %.2f\n", numero[0], numero[1], numero[2], numero[3]);
}