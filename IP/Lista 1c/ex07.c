// Turma de introdução à programação, L1c - 7
#include <stdio.h>
#define MIN_HORAS 96
#define PESO_PROVA 0.7
#define PESO_LISTA 0.15
#define PESO_TRAB 0.15

main(){
double p1, p2, p3, p4, p5, p6, p7, p8, mediaP; // Notas das oito provas.
double l1, l2, l3, l4, l5, mediaL; // Notas das cinco listas.
double trabFinal, notaFinal;
int matricula, horas;

while (1){
    scanf("%d", &matricula);
    if (matricula == -1) break; // Único caso possível para sair do while
    
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8);
    scanf("%lf %lf %lf %lf %lf", &l1, &l2, &l3, &l4, &l5);
    scanf("%lf %d", &trabFinal, &horas);
    
    mediaP = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8;
    mediaL = (l1 + l2 + l3 + l4 + l5) / 5;
    notaFinal = (PESO_PROVA * mediaP) + (PESO_LISTA * mediaL) + (PESO_TRAB * trabFinal);
    
    printf("Matricula: %d, ", matricula);
    printf("Nota Final: %.2lf, ", notaFinal);
    printf("Situacao Final: ");
    
    // Avalia a situação final do aluno
    if (notaFinal >= 6 && horas > MIN_HORAS){
        printf("APROVADO\n");
        continue;
    }
    else if (notaFinal < 6 && horas > MIN_HORAS){
        printf("REPROVADO POR NOTA\n");
        continue;
    }
    else if (notaFinal >= 6 && horas < MIN_HORAS){
        printf("REPROVADO POR FREQUENCIA\n");
        continue;
    }
    else if (notaFinal < 6 && horas < MIN_HORAS){
        printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
    }
}

}