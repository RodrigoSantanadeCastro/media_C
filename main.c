#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float res, valor;
	setlocale (LC_ALL,"Portuguese");
	printf("Digite o valor do produto\n");
	scanf("%f", &valor);
	if(valor<=99){
		res=valor/100*10+valor;
		printf("O preço era %f e passou a ser %f",valor,res);
		return 0;
	}
	if(valor>=100){
		res=valor/100*20+valor;
		printf("O preço era %f e passou a ser %f",valor,res);
		return 0;
	}
	return 0;
}
