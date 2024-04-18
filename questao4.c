#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define NOTAS 4
#define ALUNOS 1

int main(){
	setlocale(LC_ALL,"");
	
	//variaveis
	char resultado[ALUNOS][200], alunos[ALUNOS][200];
	float notas[NOTAS][ALUNOS], media[ALUNOS];
	int i,j;
	
	//dados
	for(i=0;i<ALUNOS;i++){
		printf("informe o nome do %dº aluno: ",i+1);
		gets(alunos[i]);
		media[i]=0;
		for(j=0;j<NOTAS;j++){
			printf("informe a %dª nota: \n",j+1);
			scanf("%f",&notas[i][j]);
			media[i]+=notas[i][j];
		}
		media[i]/=j;
		
		if(media[i]>=7){
			strcpy(resultado[i],"aprovado");
		}else if(media[i]>=5){
			strcpy(resultado[i],"recuperação");
		}else{
			strcpy(resultado[i],"reprovado");
		}
	}
	
	//exibindo resultados
	for(i=0;i<ALUNOS;i++){
		printf("%dº aluno: %s\n",i+1,alunos[i]);
		for(j=0;j<NOTAS;j++){
			printf("%dª nota: %.1f\n",j+1,notas[i][j]);
		}
		printf("média: %.1f\n",media[i]);
		printf("situação: %s",resultado[i]);
	}
	
	return 0;
}
