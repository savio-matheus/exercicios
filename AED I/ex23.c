//23 - Ackermann

#include <stdio.h>

int ackermann (int m, int n)
{
    if (m == 0)
        return (n + 1);
    else if (n == 0 && m > 0)
        return ackermann(m - 1, 1);
    else if (n > 0 && m > 0)
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main (void)
{
    int m, n;
    
    scanf(" %d", &m);
    scanf(" %d", &n);
    printf("%d\n", ackermann(m, n));

    return 0;
}
