#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor_inicial, valor_final, valor_desc;
	
	printf("Valor da compra ");
	scanf("%f", &valor_inicial);
		
	if(valor_inicial <= 100.00){
		printf("Sem desconto, valor final: %.2f", valor_inicial);
	}else if(valor_inicial > 100.00 && valor_inicial <= 500.00){
		valor_desc = valor_inicial * 0.05;
		valor_final = valor_inicial - valor_desc;
		
		printf("Valor original: %.2f \nPercentual de desconto: 5%% \nValor do desconto: %.2f \nValor final: %.2f", valor_inicial, valor_desc, valor_final);
	}else{
		valor_desc = valor_inicial * 0.1;
		valor_final = valor_inicial - valor_desc;
		printf("Valor original: %.2f \nPercentual de desconto: 10%% \nValor do desconto: %.2f \nValor final: %.2f", valor_inicial, valor_desc, valor_final);
	}
	
	
	return 0;
}
