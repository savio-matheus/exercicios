// Soma dos três menores, L1b - 12
#include <stdio.h>

int soma (int num1, int num2, int num3){
    printf("%d\n", (num1 + num2 + num3));
}

int main(){

int a, b, c, d;

scanf("%d%d%d%d", &a, &b, &c, &d);

if (a > b && a > c && a > d){
    soma(b, c, d);
}
else if (b > a && b > c && b > d){
    soma(a, c, d);
}
else if (c > b && c > a && c > d){
    soma(b, a, d);
}
else if (d > b && d > c && d > a){
    soma(b, c, a);
}
else {
    printf("NAO HA MAIOR NUMERO\n");
}

}