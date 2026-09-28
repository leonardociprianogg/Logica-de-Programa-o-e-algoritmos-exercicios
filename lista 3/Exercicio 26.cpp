#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nalunos, i;
	float nota, soma = 0.0, media;
	
	printf("Quantos alunos na turma? ");
	scanf("%d", &nalunos);
	
	for(i = 1; i <= nalunos; i++){
		printf("nota do aluno %d: ", i);
		scanf("%f", &nota);
		soma += nota;
	}
	media = soma / nalunos;
	
	printf("A média geral é: %.2f", media);
	
	return 0;
}
