// Calcula a média ponderada de duas notas e diz se o aluno irá reprovar,
// ficar de recuperação ou ser aprovado.

#include <stdio.h>
main(){
float nota1, nota2, media;
char nome[32];

printf("Qual o nome do aluno(a)? ");
scanf("%s", nome);
printf("Digite as duas notas: ");
scanf("%f%f", &nota1, &nota2);

media = ((nota1 * 2) + (nota2 * 3)) / 5;

if(media >= 7){
    printf("%s obteve media %.2f e esta aprovado.\n", nome, media);
}
else if(media < 7 && media > 3){
    printf("%s obteve media %.2f e esta de recuperacao.\n", nome, media);
}
else{
    printf("%s obteve media %.2f e esta reprovado.\n", nome, media);
}

getchar();
}