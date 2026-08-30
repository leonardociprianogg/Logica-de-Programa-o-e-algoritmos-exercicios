//exercicio 7

#include <stdio.h>

int main (){
	
	float salario, total;
	
	printf("Qual o valor do salario? ");
	scanf("%f", &salario);
	
	total = salario + 50 -(salario*0.1);
	
	printf("O salario a receber e: %.2f", total);
	
	return 0;
	
}
