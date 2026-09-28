#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int qtd;
	float preco, total;
	
	printf("Qual o nome do produto? ");
	scanf("%s", nome);
	printf("Quantos foram comprados? ");
	scanf("%d", &qtd);
	printf("Qual o valor de um produto? ");
	scanf("%f", &preco);
	
	total = qtd * preco;
	
	printf("O valor total da sua compra  é: %.2f", total);
	
	
	return 0;
}
