#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float valorh, salario;
	
	printf("Qual o valor recebido por hora? ");
	scanf("%f", &valorh);
	printf("Quantas horas trabalhadas? ");
	scanf("%d", &horas);
	
	salario = valorh * horas;
	
	printf("Seu salário bruto é: %.2f", salario);
	
	
	return 0;
}
