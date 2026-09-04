//exercicio 3
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("Seu número é par");
	}else{
		printf("Seu número é ímpar");
	}

return 0;

	}
