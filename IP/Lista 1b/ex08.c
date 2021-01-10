// Ano bissexto, L1b - 8
#include <stdio.h>

main(){
int ano;

scanf("%d", &ano);

if (ano > 1582){
    if (ano % 100 == 0 && ano % 400 == 0){
        printf("ANO BISSEXTO\n");
    }
    else if (ano % 4 == 0){
        printf("ANO BISSEXTO\n");
    }
    else {
        printf("ANO NAO BISSEXTO\n");
    }
}
else {
    printf("ANO NAO BISSEXTO\n");
}

}