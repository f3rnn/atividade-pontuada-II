#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	//variaveis
	int numeros, soma=0,i=0;
	float media=0;
	
	do{
		soma+=numeros;
		printf("informe um número: \n");
		scanf("%d",&numeros);
		if(numeros>0){
			i++;
		}
	}while(numeros>0);
	
	media=(float)soma/i;
	
	printf("%d\n",soma);
	printf("%d\n",i);
	printf("média: %.1f",media);
	
	return 0;
}
