// José, L1c - 21
#include <stdio.h>

main(){
int repete, i = 0;
int a, b;
int x, y, z; // Recebem os algarismos do número

scanf("%d", &repete);

for (repete; i < repete; i++){
    scanf("%d%d", &a, &b);
    if(a < 100 || a > 999 || b < 100 || b > 999 || a == b){
        return 0;
    }

    x = a / 100;
    y = (a % 100) / 10;
    z = (a % 100) % 10;
    a = ((z * 100) + (y * 10) + x);
    
    x = b / 100;
    y = (b % 100) / 10;
    z = (b % 100) % 10;
    b = ((z * 100) + (y * 10) + x);
    
    if(a > b){
        printf("%d\n", a);
        continue;
    }
    else{
        printf("%d\n", b);
        continue;
    }
}
}