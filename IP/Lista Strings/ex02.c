// LED - ex2
#include <stdio.h>
 
main()
{
    /* Número de leds usados em cada algarismo
    *                0  1  2  3  4  5  6  7  8  9 */
    int ledsNum[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char numVet[101];
    long int leds = 0;
    int i, j, testes;
    
    scanf("%d", &testes);
    
    for(testes; testes > 0; testes--)
    {
        scanf(" %100[^\n]", numVet);
        
        for(i = 0; numVet[i]; i++)
        {
            j = ( (int) numVet[i] ) - 48;
            leds += ledsNum[j];
        }
    
        printf("%ld leds\n", leds);
        leds = 0;
    }
}