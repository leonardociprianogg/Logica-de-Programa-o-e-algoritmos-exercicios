#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade");
	}else{
		printf("Menor de idade");
	}
	
	return 0;
}
