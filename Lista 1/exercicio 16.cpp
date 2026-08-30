//exercicio 16

#include <stdio.h>

int main(){
	
	float horas_trab, salario_min;
	float salario_receber, salario_bruto, imposto, valor_hora;
	
	printf("Qual a quantidade de horas trabalhadas? ");
	scanf("%f", &horas_trab);
	printf("Qual o valor do salario minimo? ");
	scanf("%f", &salario_min);
	
	//a)
	valor_hora = salario_min / 2;
	//b)
	salario_bruto = horas_trab * valor_hora;
	//c)
	imposto = 0.03 * salario_bruto;
	//d)
	salario_receber = salario_bruto - imposto;
	
	printf("O salario a receber e: %.2f", salario_receber);
	
	return 0;	
	
}
