// Ordena 3 números, L1b - 10
#include <stdio.h>

main(){
float a, b, c;

scanf("%f%f%f", &a, &b, &c);

if (a < b){
    if (c < a){
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    }
    else if (b < c){
        printf("%.2f, %.2f, %.2f\n", a, b, c);
    }
    else{
        printf("%.2f, %.2f, %.2f\n", a, c, b);
    }
}
else { // b < a
    if (c < b){
        printf("%.2f, %.2f, %.2f\n", c, b, a);
    }
    else if (a < c){
        printf("%.2f, %.2f, %.2f\n", b, a, c);
    }
    else{
        printf("%.2f, %.2f, %.2f\n", b, c, a);
    }
}

}