// Cursos - ex5
#include <stdio.h>
#include <stdlib.h>

struct curso{
	int codCurso;
	double valorCredito;
	char nome[101];
};

struct aluno{
	char nome[501];
	int codCurso;
	int creditos;
};

main()
{
	struct curso *cursos = NULL;
	struct aluno *alunos = NULL;
	int entradasC, entradasA, i, j;

	scanf(" %d", &entradasC);
	cursos = malloc( sizeof (struct curso) * entradasC );

	for(i = 0; i < entradasC; i++)
	{
		scanf(" %d", &cursos[i].codCurso);
		scanf(" %lf", &cursos[i].valorCredito);
		scanf(" %100[^\n]", cursos[i].nome);
	}

	scanf(" %d", &entradasA);
	alunos = malloc( sizeof (struct aluno) * entradasA );

	for(i = 0; i < entradasA; i++)
	{
		scanf(" %500[^\n]", alunos[i].nome);
		scanf(" %d", &alunos[i].codCurso);
		scanf(" %d", &alunos[i].creditos);
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
	free(cursos);
	free(alunos);
}