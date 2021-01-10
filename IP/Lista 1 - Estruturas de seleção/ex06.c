// Lê o nome e a idade e diz se o usuário é ou não maior de idade.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
int idade;
char nome[20];

printf("Digite seu nome: ");
gets(nome);
printf("Digite sua idade: ");
scanf("%d", &idade);

if(idade < 18)
{
    printf("%s tem %d anos e nao eh maior de idade.\n", nome, idade);
}

else
{
    printf("%s tem %d anos e eh maior de idade.\n", nome, idade);
}

system("pause");

}