//Estiagem - ex11
#include <stdio.h>
#include <stdlib.h>

struct imovel{
	int moradores;
	int consumoTotal;
	double consumoMedio;
};

struct cidade{
	struct imovel *imoveis;
	int habitantes;
	int consumoTotal;
	double consumoMedioHab;
};

int main(void)
{
	
}
