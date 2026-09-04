//exercicio 9
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo[10];
	float altura, pesoI;

	printf("Qual seu gênero? masculino/feminino: ");
	scanf("%s", sexo);
	printf("Qual sua altura em m? ");
	scanf("%f", &altura);
	
	int result_sexo = strcmp(sexo,"masculino");
	
	if(result_sexo == 0){
		pesoI = (72.7 * altura) - 58;
		printf("Seu peso ideal é: %.2f", pesoI);
	}else{
		pesoI = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é: %.2f", pesoI);
	}
	
	return 0;
	
}
