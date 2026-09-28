#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma;
	int res = 0;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &num);
	
	for(soma = 1; soma <= num; soma++){
	res += soma;
	}
	printf("A soma de todos os numeros é: %d", res);
	
	return 0;
}
