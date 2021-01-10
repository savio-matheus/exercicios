// 7 - Máxima Coordenada

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define X 0
#define Y 1
#define Z 2
#define N_COORDENADAS 3

float *liga_dois_pontos(const float *a, const float *b)
{
    float *r = malloc(sizeof (float) * N_COORDENADAS);
    r[X] = b[X] - a[X];
    r[Y] = b[Y] - a[Y];
    r[Z] = b[Z] - a[Z];
    
    return r;
}

float retorna_maior_mod(const float *a)
{
    float maior = LONG_MIN;
    int i;
    for (i = 0; i < N_COORDENADAS; i++) {
        float temp = a[i];
        if (temp < 0) temp *= -1;
        if (maior < temp) maior = temp;
    }
    
    return maior;
}

int main (void)
{
    int n, i;
    float *lista = NULL;
    float coordA[N_COORDENADAS];
    float coordB[N_COORDENADAS];

    scanf(" %d", &n);
    lista = (float *) malloc(sizeof (float) * n + 1);
    
    for (i = 0; i < n; i++) {
        scanf(" %f%f%f", &coordA[X], &coordA[Y], &coordA[Z]);

        if (i != 0) {
            float *ptr = liga_dois_pontos(coordA, coordB);
            lista[i] = retorna_maior_mod(ptr);
            free(ptr);
        }

        coordB[X] = coordA[X];
        coordB[Y] = coordA[Y];
        coordB[Z] = coordA[Z];
    }
    
    for (i = 1; i < n; i++) {
        printf("%.2f\n", lista[i]);
    }

    free(lista);

    return 0;
}

