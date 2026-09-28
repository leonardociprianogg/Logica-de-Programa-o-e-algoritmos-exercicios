#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, aprovados = 0, reprovados = 0;
	float nota, perc;
	
	for(i = 1; i <= 10; i++){
		printf("Qual a nota do aluno %d: ", i);
		scanf("%f", &nota);
	
	if(nota >= 7){
		aprovados++;
	}else{
		reprovados++;
	}
}
	perc = (aprovados / 10.0) * 100;
	
	printf("\nQuantidade de aprovados: %d \nQuantidade de reprovados: %d \nPercentual de aprovação %.2f%%", aprovados, reprovados, perc);
	
	
	return 0;
}
