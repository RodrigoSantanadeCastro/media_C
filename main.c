#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float res, valor,diferenca;
	setlocale (LC_ALL,"Portuguese");
	do{
	printf("\nCalculadora de inflação\n");
	printf("Digite o valor do produto\nou 0 para sair\n");
	scanf("%f", &valor);
	if(valor<=99){
		res=valor/100*10+valor;
		diferenca=valor/100*10;
		printf("O preço era de %f e passou a ser %f, o valor sofreu reajuste de %f\n",valor,res,diferenca);
	}
	if(valor>=100){
		res=valor/100*20+valor;
		diferenca=valor/100*20;
		printf("O preço de %f e passou a ser %f,o valor sofreu reajuste de %f\n",valor,res,diferenca);
	} 
} while(valor>0);
return 0;
}


