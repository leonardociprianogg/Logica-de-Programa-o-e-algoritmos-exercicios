//exercicio 5
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int n, r;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n >= 0){
		r = n * 2;
		printf("Seu resultado é: %d", r);
	}else{
		r = n * 3;
		printf("Seu resultado é: %d", r);
	}
	
	return 0;

	}
