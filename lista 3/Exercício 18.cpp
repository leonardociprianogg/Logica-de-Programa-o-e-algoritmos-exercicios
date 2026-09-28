#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
		
	printf("Digite sua idade: ");
	scanf("%d", &idade);	

		if(idade <= 12){
		printf("Criança");
	}else if(idade > 12 && idade <= 17){
		printf("Adolescente");
	}else if(idade >= 18 && idade <= 59){
		printf("Adulto");
	}else{
		printf("Idoso");
	}
	
	return 0;
}
