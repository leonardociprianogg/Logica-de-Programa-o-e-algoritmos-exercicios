//exercicio 6

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char v1[20], v2[20];
	
	printf("O primeiro valor é verdadeiro ou falso? ");
	scanf("%s", v1);
	
	printf("O segundo valor é verdadeiro ou falso? ");
	scanf("%s", v2);
	
	int result1 = strcmp(v1, "verdadeiro");
	
	int result2 = strcmp(v2, "verdadeiro");

	if(result1 == 0 && result2 == 0){
		printf("Seu resultado é verdadeiro");
	}else{
		printf("Seu resultado é falso");
	}
	
	return 0;
}
