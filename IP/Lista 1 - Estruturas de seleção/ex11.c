// Diz o quanto um aluno está apto a receber uma bolsa de estudos com
// base em sua média escolar.
#include <stdio.h>

main(){
float media;
char aluno[32];

printf("Qual o nome do aluno(a)? ");
scanf("%s", aluno);
printf("Qual a media escolar? ");
scanf("%f", &media);

if(media > 10){
    printf("Sei...\n");
    return 0;
}

if(media >= 9.0){
    printf("O(A) aluno(a) %s eh altamente recomendado(a).\n", aluno);
}
else if(media >= 8.0 && media < 9.0){
    printf("O(A) aluno(a) %s eh fortemente recomendado(a).\n", aluno);
}
else if(media >= 7.0 && media < 8.0){
    printf("O(A) aluno(a) %s eh recomendado(a).\n", aluno);
}
else{
    printf("O(A) aluno(a) %s eh nao recomendado(a).\n", aluno);
}

getchar();
}