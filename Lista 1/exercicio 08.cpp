//exercicio 8

#include <stdio.h>

int main (){
	
	float deposito, juros, rendimento, total;
	
	printf("qual o valor do deposito? ");
	scanf("%f", &deposito);
	printf("qual o valor da taxa? ");
	scanf("%f", &juros);
	
	rendimento = deposito * juros / 100;
	total = deposito + rendimento;
	
	printf("O valor do rendimento e: %.2f\n", rendimento);
	printf("o valor total apos rendimento e: %.2f", total);
	
	return 0;
}
