// 4 - Aula Cancelada

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, k; // número de alunos e número mínimo de presenças
    int *pontuais = NULL;
    int i, j, temp;
    
    scanf(" %d", &n);
    scanf(" %d", &k);
    
    pontuais = malloc(sizeof (int) * n);
    for (i = 0, j = 0; i < n; i++) {
        scanf(" %d", &temp);
        if (temp <= 0) {
            pontuais[j] = i + 1;
            j++;
        }
    }
    
    if (j < k) {
        printf("SIM\n");
        return 0;
    }

    printf("NAO\n");
    for (j -= 1; j >= 0; j--) {
        printf("%d\n", pontuais[j]);
    }

    return 0;
}

