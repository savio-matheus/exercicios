// Counting Sort - ex24
#include <stdio.h>

void counting_sort (int n)
{
    int i, j, k, maior = 0;

// Passo 1   
    int v[n], vOrd[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        j = v[i];
        
        if(j > maior)
        {
            maior = j;
        }
    }

// Passo 2   
    int vCount[maior + 1];
    for(i = 0; i <= maior; i++) vCount[i] = 0;
    
// Passo 3
    for(i = 0; i < n; i++)
    {
        vCount[v[i]]++;
    }
    
// Passo 4
    for(i = 1; i <= maior; i++)
    {
        vCount[i] += vCount[i - 1];
    }
    
// Passo 5
    for(i = 0; i < n; i++)
    {
        vOrd[vCount[v[i]] - 1] = v[i];
        vCount[v[i]]--;
    }
    
// Passo 6
    for(i = 0; i < n; i++)
    {
        v[i] = vOrd[i];
        
        printf("%d", v[i]);
        
        if(i < n - 1) printf(" ");
        else printf("\n");
    }
}

main()
{
    int n;
    scanf("%d", &n);
    
    while(n)
    {
        counting_sort(n);
        scanf("%d", &n);
    }
}