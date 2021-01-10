// Índices matriz inferior
#include <stdio.h>

main(){
int m, n;
int i, j;

scanf("%d%d", &m, &n);

for (i = 1; i <= m; i++){
    for (j = 1; j <= n; j++){
        if (i > j){
            printf("(%d,%d)", i, j);
            
            if(i > (j + 1) && j < n){
                printf("-");
            }
        }
        
    }
    printf("\n");
}

}