//exercicio 15

#include <stdio.h>

int main(){

	float preco_fabrica, pc_lucro, valor_lucro, pc_imposto, valor_imposto, total;
	
	printf("Qual o preco de fabrica do veiculo? ");
	scanf("%f", &preco_fabrica);
	printf("Qual o percentual de lucro do distribuidor? ");
	scanf("%f", &pc_lucro);
	printf("Qual o percentual do imposto? ");
	scanf("%f", &pc_imposto);
	
	valor_lucro = (preco_fabrica * pc_lucro) / 100;
	valor_imposto = (preco_fabrica * pc_imposto) / 100;
	total = preco_fabrica + valor_lucro + valor_imposto;
	
	printf("a) lucro do distribuidor: %.2f\n", valor_lucro);
	printf("b) valor dos impostos: %.2f\n", valor_imposto);
	printf("c) preco final do veiculo: %.2f\n", total);
	
	return 0;
	
}
