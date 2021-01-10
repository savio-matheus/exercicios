//Aula cancelada - ex16
#include <stdio.h>

main(){
	int alunos, presenca, i, naHora = 0, atrasados = 0;
	scanf("%d%d", &alunos, &presenca);
	int chegada[alunos];
	
	for(i = 0; i < alunos; i++){
		scanf("%d", &chegada[i]);
	}
	
	for(i = 0; i < alunos; i++){
		if(chegada[i] <= 0){
			naHora++;
		}
		else{
			atrasados++;
		}
	}
	
	if(naHora >= presenca){
		printf("NAO\n");
		for(i = (alunos - 1); i >= 0; i--){
			if(chegada[i] <= 0){
				printf("%d\n", i + 1);
			}
		}
	}
	else{
		printf("SIM\n");
	}
}
