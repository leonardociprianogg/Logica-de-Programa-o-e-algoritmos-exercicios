//exercicio 10
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso, imc;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	
	imc = peso / (altura * altura);
	
	if(imc < 18.5){
		printf("Você está abaixo do peso");
	}else if(imc >= 18.5 && imc <= 25){
		printf("Você está no peso normal");
	}else if(imc > 25 && imc <= 30){
		printf("Você está acima do peso");
	}else if(imc > 30){
		printf("Você está obeso");
	}
	
	return 0;
}
