//exercicio 17
#include <stdio.h>

int main(){
	
	float salario, sobra1;
	float valor1, valor2, cheque1, cheque2;
	float saldo;
	
	printf("Qual o valor depositado? ");
	scanf("%f", &salario);
	printf("Qual o valor do primeiro cheque emitido? ");
	scanf("%f", &valor1);
	printf("Qual o valor do segundo cheque emitido? ");
	scanf("%f", &valor2);
	
	cheque1 = valor1 + (salario*0.0038);
	sobra1 = salario - cheque1;
	cheque2 = valor2 + (sobra1*0.0038);
	saldo = salario - cheque1 - cheque2;
	
	printf("O seu saldo e de: %.2f", saldo);
	
	return 0;
	
}
