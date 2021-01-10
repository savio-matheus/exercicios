// Conta de água, L1b - 2
#include <stdio.h>
#include <math.h>

main(){
int numConta;
float consumo, valConta;
char tipo;

scanf("%d %f %c", &numConta, &consumo, &tipo);

// A partir do tipo de conta aplica uma cobrança específica.
switch(tipo){
    case 'R':
        valConta = 5 + (0.05 * consumo);
        printf("CONTA = %d\n", numConta);
        printf("VALOR DA CONTA = %.2f\n", truncf(valConta * 100) / 100);
    break;
    
    case 'C':
        if (consumo >= 80){
            consumo -= 80;
            valConta = (consumo * 0.25) + 500;
        }
        else{
            valConta = (consumo * 0.25);
        }
        
        printf("CONTA = %d\n", numConta);
        printf("VALOR DA CONTA = %.2f\n", truncf(valConta * 100) / 100);
    break;
    
    case 'I':
        if (consumo >= 100){
            consumo -= 100;
            valConta = (consumo * 0.04) + 800;
        }
        else{
            valConta = (consumo * 0.04);
        }
        
        printf("CONTA = %d\n", numConta);
        printf("VALOR DA CONTA = %.2f\n", truncf(valConta * 100) / 100);
    break;
}

}