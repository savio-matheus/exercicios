// Número palíndromo, L1b - 16
#include <stdio.h>

int main(){
int palin;
int a, b, c, d, e; // Algarismos da entrada.

scanf("%d", &palin);

a = (palin / 100) / 100;
b = (palin / 1000) % 10;
c = (palin % 1000) / 100;
d = (palin % 100) / 10;
e = (palin % 1000) % 10;

// Checa quantos dígitos e diz se é palíndromo.
if (palin >= 10000 && palin < 99999 ){
	if(a == e && b == d){
		printf("PALINDROMO\n");
	}
	else{
		printf("NAO PALINDROMO\n");
	}
}
else if (palin < 10000 && palin > 999){
	if(b == e && c == d){
		printf("PALINDROMO\n");
	}
	else{
		printf("NAO PALINDROMO\n");
	}
}

else if (palin < 999 && palin > 100){
	if(c == e){
		printf("PALINDROMO\n");
	}
	else{
		printf("NAO PALINDROMO\n");
	}
}

else if (palin < 100 && palin > 10){
	if(d == e){
		printf("PALINDROMO\n");
	}
	else{
		printf("NAO PALINDROMO\n");
	}
}

else{
	printf("NUMERO INVALIDO\n");
	return 0;
}


}
