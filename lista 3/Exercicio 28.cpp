#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, maior;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	num = maior;
	
	for(i=2; i<=10; i++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
	if(num > maior){
		maior = num;
	}
	}
	printf("O maior numero é o: %d", maior);
	
	return 0;
}
