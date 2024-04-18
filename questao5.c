#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAMANHO 3
int main(){
	setlocale(LC_ALL,"");
	
	//variaveis
	int numeros,i,maiorNumero = INT_MIN, menorNumero = INT_MAX;
	
	//pedindo dados
	for(i=0;i<TAMANHO;i++){
		printf("informe o %dº número: \n",i+1);
		scanf("%d",&numeros);
		
		if(numeros>maiorNumero){
			maiorNumero=numeros;
		}
		if(numeros<menorNumero){
			menorNumero=numeros;
		}
	}
	
	printf("maior número informado: %d\n",maiorNumero);
	printf("menor número informado: %d\n",menorNumero);
}
