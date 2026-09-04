//exercicio 12
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int id;
	float n1, n2, n3, me, ma;
	
	printf("Qual o número de matrícula? ");
	scanf("%d", &id);
	
	printf("Qual a nota1? ");
	scanf("%f", &n1);
	printf("Qual a nota2? ");
	scanf("%f", &n2);
	printf("Qual a nota3? ");
	scanf("%f", &n3);
	printf("Qual a média dos exercícios? ");
	scanf("%f", &me);
	
	ma = (n1 + (n2 * 2) + (n3 * 3) + me) / 7;
	
	if(ma >= 90){
		printf("Nº de matrícula: %d\n nota1: %.2f\n nota2: %.2f\n nota3: %.2f\n ME: %.2f\n MA: %.2f Conceito Obtido: A\n Situação final: Aprovado", id, n1, n2, n3, me, ma);
	}else if(75 <= ma && ma < 90){
		printf("Nº de matrícula: %d\n nota1: %.2f\n nota2: %.2f\n nota3: %.2f\n ME: %.2f\n MA: %.2f Conceito Obtido: B\n Situação final: Aprovado", id, n1, n2, n3, me, ma);
	}else if(60 <= ma && ma < 75){
		printf("Nº de matrícula: %d\n nota1: %.2f\n nota2: %.2f\n nota3: %.2f\n ME: %.2f\n MA: %.2f Conceito Obtido: C\n Situação final: Aprovado", id, n1, n2, n3, me, ma);
	}else if(40 <= ma && ma < 60){
		printf("Nº de matrícula: %d\n nota1: %.2f\n nota2: %.2f\n nota3: %.2f\n ME: %.2f\n MA: %.2f Conceito Obtido: D\n Situação final: Reprovado", id, n1, n2, n3, me, ma);
	}else if(ma < 40){
		printf("Nº de matrícula: %d\n nota1: %.2f\n nota2: %.2f\n nota3: %.2f\n ME: %.2f\n MA: %.2f Conceito Obtido: E\n Situação final: Reprovado", id, n1, n2, n3, me, ma);
	}
	
	return 0;
	
}
