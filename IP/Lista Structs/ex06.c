// Ordenação por data - ex6
#include <stdio.h>
#include <stdlib.h>

struct aluno{
	int matricula;
	int dia;
	int mes;
	int ano;
	char nome[201];
};

// Retorna 1 se o primeiro aluno for mais novo ou se tiver
// a mesma idade do outro, e zero caso contrário.
int comparaDataNasc(struct aluno *p, struct aluno *t)
{
	if( p->ano < t->ano )
	{
		return 1;
	}
	else if( p->ano == t->ano )
	{
		if( p->mes < t->mes )
		{
			return 1;
		}
		else if( p->mes == t->mes )
		{
			if( p->dia <= t->dia)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

void sort_data( struct aluno *p, int n )
{
	int i, j, min;
	struct aluno temp_u;

	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if( !comparaDataNasc(&p[j], &p[min]) )
			{
				min = j;
			}
		}
		temp_u = p[i];
		p[i] = p[min];
		p[min] = temp_u;
	}
}

main()
{
	struct aluno *alunos = NULL;
	int entradas, i;

	scanf(" %d", &entradas);
	alunos = malloc( sizeof (struct aluno) * entradas);

	for(i = 0; i < entradas; i++)
	{
		scanf(" %d", &alunos[i].matricula);
		scanf(" %d", &alunos[i].dia);
		scanf(" %d", &alunos[i].mes);
		scanf(" %d", &alunos[i].ano);
		scanf(" %200[^\n]", alunos[i].nome);
	}

	sort_data(alunos, entradas);

	for(i = 0; i < entradas; i++)
	{
		printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n",
			alunos[i].matricula, alunos[i].nome,
			alunos[i].dia, alunos[i].mes, alunos[i].ano);
	}

	free(alunos);
}