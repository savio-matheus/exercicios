// Recebe três valores (A, B e C) e diz se eles podem corresponder aos
// lados de um triângulo; se sim, informa o tipo de triângulo.
#include <stdio.h>
#include <stdlib.h>

main(){
int A, B, C; //lados do triângulo

printf("Insira tres numeros inteiros: ");
scanf("%d%d%d", &A, &B, &C);

if (A == B && B == C){
    printf("Com esses valores, pode formar um triangulo equilatero.\n");
    system("pause");
    return 0;
}

if ((A + B) > C && (A + C) > B && (B + C) > A){
    if (A == B || B == C || A == C){
        printf("Com esses valores, pode formar um triangulo isosceles.\n");
    }
    else{
        printf("Com esses valores, pode formar um triangulo escaleno.\n");
    }
}
else{
    printf("Nao eh possivel formar um triangulo com essas medidas.\n");
}

system("pause");
}