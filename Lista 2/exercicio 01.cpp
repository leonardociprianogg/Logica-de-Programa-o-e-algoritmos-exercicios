//exercicio 1
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, soma;
	
	printf("Escreva um número: ");
	sanf("%f", &a);
	printf("Escreva um número: ");
	sanf("%f", &b);
	printf("Escreva um número: ");
	sanf("%f", &c);
	
	soma = a + b;
	
	if(soma > c){
		printf("A soma de A e B é maior que C");
	}else{
		printf("A soma de A e B é menor que C");
	}
	
	return 0;
	
}
