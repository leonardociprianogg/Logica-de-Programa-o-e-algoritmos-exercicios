#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um numero para saber se é par ou ímpar: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("Par");
	}else{
		printf("ímpar");
	}
		
	return 0;
}
