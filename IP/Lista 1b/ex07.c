// Valor de y dado x, L1b - 7
#include <stdio.h>

main(){
int x;

scanf("%d", &x);

if (x < 1){
    printf("Y = %d\n", x);
}
else if (x == 1){
    printf("Y = 0\n");
}
else {
    printf("Y = %d\n", (x * x));
}
}