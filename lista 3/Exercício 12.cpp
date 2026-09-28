#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("Positivo");
	}else if(num < 0){
		printf("negativo");
	}else{
		printf("zero");
	}
	
	
	return 0;
}
