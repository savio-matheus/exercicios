// Decimal para binário - ex8
#include <stdio.h>

main()
{
    int dec;
    int binario[32], i = 0, negativo = 0;
    
    scanf("%d", &dec);
    
    if(dec == 0)
    {
        printf("0\n");
        return 0;
    }
    
    if(dec < 0)
    {
        negativo = 1;
        dec *= -1;
    }
    
    while(dec > 1 || dec < -1)
    {
        binario[i] = dec % 2;
        dec /= 2;
        i++;
    }
    
    if(negativo) binario[i] = -1;
    else binario[i] = 1;
    
    for(i; i >= 0; i--)
    {
        printf("%d", binario[i]);
    }
    printf("\n");
}