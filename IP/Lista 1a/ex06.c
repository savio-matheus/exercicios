// Tempo em segundos, L1a - 7
#include <stdio.h>

main(){
int horas, minutos, segundos;

scanf("%d%d%d", &horas, &minutos, &segundos);

segundos += (horas * 3600) + (minutos * 60);

printf("O TEMPO EM SEGUNDOS E = %d\n", segundos);
}