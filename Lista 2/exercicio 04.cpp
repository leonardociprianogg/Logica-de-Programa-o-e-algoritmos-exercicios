//exercicio 4
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("Digite o número a: ");
	scanf("%d", &a);
	printf("Digite o número b: ");
	scanf("%d", &b);
	
	if(a == b){
		c = a + b;
		printf("O valor de C é: %d", c);
	}else{
		c = a * b;
		printf("O valor de C é: %d", c);
	}

return 0;

	}
