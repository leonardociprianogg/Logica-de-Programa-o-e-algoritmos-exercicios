#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float qtdlitro, preco, bruto, desconto, total;
	
	printf("Quantos litros foram abastecidos? \n");
	scanf("%f", &qtdlitro);
	printf("Qual o valor do litro? ");
	scanf("%f", &preco);
	
	bruto = qtdlitro * preco;
	
	if(qtdlitro < 20){
		printf("\nSem desconto. Valor final: %.2f", bruto);
	}else if(qtdlitro >= 20 && qtdlitro <= 40){
		total = bruto * 0.97;
		desconto = bruto - total;
		printf("\nValor bruto: %.2f \nDesconto: %.2f%% \nValor final: %.2f\n", bruto, desconto, total);
	}else{
		total = bruto * 0.95;
		desconto = bruto - total;
		printf("\nValor bruto: %.2f \nDesconto: %.2f%% \nValor final: %.2f\n", bruto, desconto, total);
	}
	
	
	return 0;
}
