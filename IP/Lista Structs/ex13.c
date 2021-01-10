//Raízes de Equações quadradas - ex13
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Complex{
	double real;
	double lateral;
};

struct RaizEqu2{
	struct Complex x1;
	struct Complex x2;
};

// **************************************************************************

struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c )
{
	struct RaizEqu2 resultado;
	double den, temp;

	resultado.x1.lateral = 0;
	resultado.x2.lateral = 0;
	resultado.x1.real = 0;
	resultado.x2.real = 0;

	den = (2 * a);
	temp = (b * b) - (4 * a * c);

	if( temp < 0)
	{
		resultado.x1.lateral = ( sqrt(-temp) / den );
		resultado.x1.real = (-b) / den;

		resultado.x2.lateral = -( sqrt(-temp) / den );
		resultado.x2.real = (-b) / den;
	}
	else
	{
		resultado.x1.real = ( (-b) + sqrt(temp) ) / den;
		resultado.x2.real = ( (-b) - sqrt(temp) ) / den;
	}

	return resultado;
}

void complex_print( struct Complex c )
{
	int temReal = 0;
	if( c.real == 0 && c.lateral == 0 )
	{
		printf("0.00");
		return;
	}

	if( c.real != 0 )
	{
		printf("%.2lf", c.real);
		temReal = 1;
	}

	if( c.lateral != 0 )
	{
		if ( c.lateral == 1)
		{
			if( temReal ) printf("+i");
			else printf("i");
		}
		else if( c.lateral == -1 ) printf("-i");
		else if( c.lateral > 0 ) printf("+%.2lfi", c.lateral);
		else printf("%.2lfi", c.lateral);
	}
	
}

int main(void)
{
	float a, b, c;
	struct RaizEqu2 raizes;
	struct Complex raiz1, raiz2;

	scanf(" %f%f%f", &a, &b, &c);

	raizes = calcula_raiz_equ_2(a, b, c);

	raiz1.real = raizes.x1.real;
	raiz1.lateral = raizes.x1.lateral;

	raiz2.real = raizes.x2.real;
	raiz2.lateral = raizes.x2.lateral;

	printf("x1 = ");
	complex_print(raiz1);
	printf("\nx2 = ");
	complex_print(raiz2);
	printf("\n");
}
