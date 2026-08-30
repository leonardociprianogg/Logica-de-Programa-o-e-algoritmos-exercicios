//exercicio 6

#include <stdio.h>

int main(){
	
	float salario, total;
	
	printf("qual o valor do salario? ");
	scanf("%f", &salario);
	
	total = salario - (salario*0.07) + (salario*0,05);
	
	printf("O total a receber e de: %.2f", total);
	
	return 0;
	
}
