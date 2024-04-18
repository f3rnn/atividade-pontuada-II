#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUMEROS 3
int main(){
	setlocale(LC_ALL,"");
	
	//variaveis
	int numeros[NUMEROS], pares=0, impares=0, i;
	
	//dados
	for(i=0;i<NUMEROS;i++){
		printf("informe um número: ");
		scanf("%d",&numeros[i]);

		if(numeros[i]%2==0){
			pares++;
		}else{
			impares++;
		}
	}
	
	printf("quantidade de pares: %d\n",pares);
	printf("quantidade de impares: %d\n",impares);
	for(i=0;i<NUMEROS;i++){
		printf("%d\n",numeros[i]);
	}
	
	return 0;
}
