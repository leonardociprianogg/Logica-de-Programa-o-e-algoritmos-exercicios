//exercicio 11
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float preco, codigo, apagar;
	
	printf("Valor do produto: ");
	scanf("%f", &preco);
	printf("Método de pagamento: 1/2/3/4: ");
	scanf("%f", &codigo);
	
	if(codigo == 1){
		apagar = preco * 0.9;
		printf("O total a pagar é: %.2f", apagar);
	}else if(codigo == 2){
		apagar = preco * 0.85;
		printf("O total a pagar é: %.2f", apagar);
	}else if(codigo == 3){
		apagar = preco / 2;
		printf("O total a pagar é: 2 parcelas de %.2f", apagar);
	}else if(codigo == 4){
		apagar = (preco * 1.1) / 2;
		printf("O total a pagar é: 2 parcelas de %.2f", apagar);
	}
	
	return 0;
	
}
