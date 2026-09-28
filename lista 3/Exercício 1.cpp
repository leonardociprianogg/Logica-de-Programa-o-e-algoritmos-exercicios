#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	
	printf("Qual o seu nome? ");
	scanf("%s", nome);
	
	printf("Olá, %s ! Seja bem-vindo(a), à disciplina de Lógica de Programação", nome);
	
	return 0;
}
