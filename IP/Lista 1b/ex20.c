// Várias operações, L1b - 20
#include <stdio.h>

main(){
int i, ab = 0, bc = 0, ca = 0;
float a, b, c;

scanf("%d%f%f%f", &i, &a, &b, &c);
//----------------
if (a >= b){
    ab = 1;
}
if (b >= c){
    bc = 1;
}
if (c >= a){
    ca = 1;
}
//----------------
if (i == 1){
    if (ab == 1 && bc == 1){
        printf("%.2f %.2f %.2f\n", c, b, a);
    }
    else if (ab == 1 && ca == 1){
        printf("%.2f %.2f %.2f\n", b, a, c);
    }
    else{
        printf("%.2f %.2f %.2f\n", a, c, b);
    }
}
else if (i == 2){
    if (ab == 1 && bc == 1){
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
    else if (ab == 1 && ca == 1){
        printf("%.2f %.2f %.2f\n", c, a, b);
    }
    else{
        printf("%.2f %.2f %.2f\n", b, c, a);
    }
}
else if (i = 3){
    if (ab == 1 && bc == 1){
        printf("%.2f %.2f %.2f\n", b, a, c);
    }
    else if (ab == 1 && ca == 1){
        printf("%.2f %.2f %.2f\n", a, c, b);
    }
    else{
        printf("%.2f %.2f %.2f\n", c, b, a);
    }
}

}