//exercicio 8
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf(" Digite um número: ");
	scanf("%d", &a);
	printf(" Digite um número diferente do anterior: ");
	scanf("%d", &b);
	printf(" Digite um número diferente dos anteriores: ");
	scanf("%d", &c);
	
	if(a == b || a == c || b == c ){
		printf("Não podem ser números iguais.");
	}else if(a > b && b > c){
		printf("A ordem é %d, %d, %d", a, b, c);
	}else if(a > c && c > b){
		printf("A ordem é %d, %d, %d", a, c, b);
	}else if(b > c && c > a){
		printf("A ordem é %d, %d, %d", b, c, a);
	}else if(b > a && a > c){
		printf("A ordem é %d, %d, %d", b, a, c);
	}else if(c > a && a > b){
		printf("A ordem é %d, %d, %d", c, a, b);
	}else if(c > b && b > a){
		printf("A ordem é %d, %d, %d", c, b, a);
	}
	
	return 0;
}
