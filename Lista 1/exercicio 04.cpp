//exercicio 4

#include <stdio.h>

int main(){
	
	float salario, aumento;
	
	printf("Qual o valor do salario? ");
	scanf("%f", &salario);
	
	aumento = salario * 1.25;
	
	printf("O valor a receber e de: %.2f", aumento);
	
	return 0;
	
}
