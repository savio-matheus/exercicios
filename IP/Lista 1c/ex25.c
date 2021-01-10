// N ao cubo, L1c - 25
#include <stdio.h>
#include <math.h>

main(){
int num, entrada, cubo, i, impar;

scanf("%d", &entrada);

for(num = 1; num <= entrada; num++){
    cubo = pow(num, 3);
    impar = (num * num) - (num - 1);

    printf("%d*%d*%d = %d", num, num, num, impar);

    for (i = 1; i < num; i++){
        impar = impar + 2;
        printf("+%d", impar);
    }

    printf("\n");
}

}