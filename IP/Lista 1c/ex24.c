// Mínimo múltiplo comum, L1c - 24
#include <stdio.h>

main(){
int a, b, c, div = 2, divs = 0;
double mmc = 1;

scanf("%d%d%d", &a, &b, &c);

while(div != 0 && div < 100000){
    // Verifica se ainda há divisões faltando
    if (a > 1 && a % div == 0 || b > 1 && b % div == 0 || c > 1 && c % div == 0){
        printf("%d %d %d :%d\n", a, b, c, div);
    }
    else if (a == 1 && b == 1 && c == 1){
        printf("MMC: %.lf\n", mmc);
        break;
    }
    else{
        div++;
        continue;
    }
    
    if (a % div == 0){
        a /= div;
        mmc *= div;
        divs++; // Evita multiplicações extras em mmc.
    }
    if (b % div == 0){
        b /= div;
        if (divs == 0){
            mmc *= div;
            divs++;
        }
    }
    if (c % div == 0){
        c /= div;
        if (divs == 0){
            mmc *= div;
        }
    }
    
    div++;
    divs = 0;
}

}