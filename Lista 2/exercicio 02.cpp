//exercicio 2
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20], sexo[10], civil[10];
	int tempo;
	
	printf("Qual seu nome? ");
	scanf("%s", nome);
	
	printf("Qual é seu gênero? masculino/feminino: ");
	scanf("%s", sexo);
	
	printf("Qual seu estado civíl? solteiro/casado: ");
	scanf("%s", civil);
	
	int result_sexo = strcmp(sexo, "feminino");
	
	int result_civil =strcmp(civil, "casado");
	
	if(result_sexo == 0 && result_civil == 0){
		int tempo;
		printf("Quantos anos de casada? ");
		scanf("%d", &tempo);
	}
	
	return 0;
	
}
