//exercicio 5

#include <stdio.h>

int main(){
	
	float salario, porcentagem, aumento, total;
	
	printf("Qual o valor do salario? ");
	scanf("%f", &salario);
	printf("Qual a porcentagem de aumento? ");
	scanf("%f", &porcentagem);
	
	aumento = salario * (porcentagem/100);
	total = salario + aumento;
	
	printf("Seu aumento e de: %.2f\n", aumento);
	printf("Seu novo salario e: %.2f\n", total);
	
	return 0;	
	
}
