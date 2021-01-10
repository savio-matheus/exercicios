// Cursos - Versão 2 - ex8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct curso{
	int codCurso;
	double valorCredito;
	char *nome;
};

struct aluno{
	char *nome;
	int codCurso;
	int creditos;
};

main()
{
	struct curso *cursos = NULL;
	struct aluno *alunos = NULL;
	int entradasC, entradasA, i, j;
	char buffer[1001];

	scanf(" %d", &entradasC);
	cursos = malloc( sizeof (struct curso) * entradasC );

	for(i = 0; i < entradasC; i++)
	{
		scanf(" %d", &cursos[i].codCurso);
		scanf(" %lf", &cursos[i].valorCredito);
		scanf(" %1000[^\n]", buffer);

		cursos[i].nome = malloc( strlen(buffer) + 1 );
		strcpy(cursos[i].nome, buffer);
	}

	scanf(" %d", &entradasA);
	alunos = malloc( sizeof (struct aluno) * entradasA );

	for(i = 0; i < entradasA; i++)
	{
		scanf(" %1000[^\n]", buffer);
		scanf(" %d", &alunos[i].codCurso);
		scanf(" %d", &alunos[i].creditos);

		alunos[i].nome = malloc( strlen(buffer) + 1 );
		strcpy(alunos[i].nome, buffer);
	}

	for(i = 0; i < entradasA; i++)
	{
		printf("Aluno(a): %s ", alunos[i].nome);
		for(j = 0; j < entradasC; j++)
		{
			if(alunos[i].codCurso == cursos[j].codCurso)
			{
				printf("Curso: %s ", cursos[j].nome);
				printf("Num. Creditos: %d ", alunos[i].creditos);
				printf("Valor Credito: %.2lf ", cursos[j].valorCredito);

				printf("Mensalidade: %.2lf\n",
					(alunos[i].creditos * cursos[j].valorCredito) );
			}
		}
	}

	for(i = 0; i < entradasA; i++)
	{
		free(alunos[i].nome);
	}
	for(i = 0; i < entradasC; i++)
	{
		free(cursos[i].nome);
	}

	free(cursos);
	free(alunos);
}