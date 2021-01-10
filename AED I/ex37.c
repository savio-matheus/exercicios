#include <stdio.h>

#define DIM 50

void converte (int n) {
    int i;
    char r[DIM];
    char bases[] = {'A', 'C', 'G', 'T'};
    
    for (i = 0; i < DIM && n != 0; i++) {
        r[i] = n % 4;
        n /= 4;
    }
    
    for (i -= 1; i >= 0; i--) {
        printf("%c", bases[r[i]]);
    }
    
    printf("\n");
}

int main (void)
{
    int casos;
    int numero;
    int i;

    scanf(" %d", &casos);

    for (i = 0; i < casos; i++) {
        scanf(" %d", &numero);
        converte(numero);
    }
}
