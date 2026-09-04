//exercicio 7
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int n, r;
	
	printf("Escolha um numero inteiro: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		r = n + 5;
		printf("O seu resultado é: %d", r);
	}else{
		r = n + 8;
		printf("O seu resultado é: %d", r);
	}
	
	return 0;
	
	}
