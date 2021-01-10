#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265
#define CORTE 0.500000

int arredonda(double area)
{
    if ((area - (int) area) >= CORTE){
        return (int) area + 1;
    }
    else{
        return (int) area;
    }
}

int circulo(int raio)
{
    double area = (int) (raio * raio) * PI;
    return arredonda(area);
}

int elipse(int raio_maior, int raio_menor)
{
    double area = raio_maior * raio_menor * PI;
    return arredonda(area);
}

int triangulo(int a, int b, int c)
{
    double semi_p;
    double area;

    semi_p = (double) (a + b + c) / 2;
    area = semi_p * (semi_p - a) * (semi_p - b) * (semi_p - c);
    area = sqrt(area);

    return arredonda(area);
}

int trapezio(int base_maior, int base_menor, int altura)
{
    double area = (base_menor + base_maior) * altura;
    area = area / 2;
    return arredonda(area);
}

int main(void)
{
    int casos;
    int i;
    char escolha;
    int *resultados = NULL;

    scanf(" %d ", &casos);

    resultados = (int *) malloc(casos * sizeof (int));

    for (i = 0; i < casos; i++)
    {
        scanf(" %c", &escolha);
        switch (escolha)
        {
            int a, b, c;

            case 'C':
            case 'c':
                scanf(" %d", &a);
                resultados[i] = circulo(a);
                break;

            case 'E':
            case 'e':
                scanf(" %d%d", &a, &b);
                resultados[i] = elipse(a, b);
                break;

            case 'T':
            case 't':
                scanf(" %d%d%d", &a, &b, &c);
                resultados[i] = triangulo(a, b, c);
                break;

            case 'Z':
            case 'z':
                scanf(" %d%d%d", &a, &b, &c);
                resultados[i] = trapezio(a, b, c);
                break;
        }
    }

    for (i = 0; i < casos; i++){
        printf("%d\n", resultados[i]);
    }

    free(resultados);
    return 0;
}

