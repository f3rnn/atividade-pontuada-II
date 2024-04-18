#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	//variaveis
	int codigo, idade;
	char nome[200], email[200], telefone[200];
	
	printf("digite seu nome:\n");
	gets(nome);
	fflush(stdin);
	printf("sua idade: \n");
	scanf("%d",&idade);
	fflush(stdin);
	printf("seu email: \n");
	scanf("%s",&email);
	fflush(stdin);
	printf("seu telefone: \n");
	scanf("%s",&telefone);
	fflush(stdin);
	
	//switch case
	do{
		printf("1-mostrar nome e idade\n");
		printf("2-mostrar nome e email\n");
		printf("3-mostrar nome e telefone\n");
		printf("4-mostrar todas as informações\n");
		printf("0-sair do programa\n");
		printf("informe o código da operação que deseja realizar: \n");
		scanf("%d",&codigo);
		
		switch(codigo){
			case 1:
				printf("nome: %s\n",nome);
				printf("idade: %d\n",idade);
				break;
			case 2:
				printf("nome: %s\n",nome);
				printf("email: %s\n",email);
				break;
			case 3:
				printf("nome: %s\n",nome);
				printf("telefone: %s\n",telefone);
				break;
			case 4:
				printf("nome: %s\n",nome);
				printf("idade: %d\n",idade);
				printf("email: %s\n",email);
				printf("telefone: %s\n",telefone);
				break;
			case 0:
				break;
			default:
				printf("opção incorreta, tente novamente");
				system("cls || clear");
				fflush(stdin);
				break;
		}
	}while(codigo!=0);
	
	return 0;
}
