// Mínimo múltiplo comum, L1c - 24al
#include <stdio.h>

main(){
    int n1, n2, n3, mmc = 1, div = 2;
    
    scanf("%d%d%d", &n1, &n2, &n3);
    
    do{
        if (n1 % div == 0 || n2 % div == 0 || n3 % div == 0){
            if (n1 % div == 0){
                printf("%d ", n1);
                n1 /= div;
            }
            else{
                printf("%d ", n1);
            }
            
            if (n2 % div == 0){
                printf("%d ", n2);
                n2 /= div;
            }
            else{
                printf("%d ", n2);
            }
            
            if (n3 % div == 0){
                printf("%d ", n3);
                n3 /= div;
            }
            else{
                printf("%d ", n3);
            }
            
            mmc *= div;
            printf(":%d\n", div);
        }
        else{
            div++;
        }
    }while (n1 > 1 || n2 > 1 || n3 > 1);
    
    printf("MMC: %d\n", mmc);
}