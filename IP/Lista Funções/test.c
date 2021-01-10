#include <stdio.h>

void grausa(int cc,int dr,int rt){
    if (cc<7 && dr>50 && rt>80000){
        printf("10\n");
    }
    else if (cc<7 && dr>50 && rt<80000){
        printf("9\n");
    }

    else if (cc<7 && dr<50 && rt<80000){
        printf("8\n");
    }
    else{
        printf("7\n");
    }
}

main(){
    int cc,dr,rt;
    scanf("%d%d%d",&cc,&dr,&rt);
    grausa(cc,dr,rt);
}   