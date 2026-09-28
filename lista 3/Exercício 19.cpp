#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, alt, imc;
	
	
	printf("Digite seu peso em kg: ");
	scanf("%f", &peso);
	printf("Digite a sua altura em metro: ");
	scanf("%f", &alt);
	
	imc = peso / (alt * alt);
	
	
	if(imc < 18.5){
		printf("Abaixo do peso");
	}else if(imc >= 18.5 && imc < 25){
		printf("Peso adequado");
	}else if(imc >= 25 && imc < 30){
		printf("Sobrepeso");
	}else{
		printf("Obesidade");
	}
	
	return 0;
}
