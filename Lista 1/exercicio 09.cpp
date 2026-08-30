//exercicio 9

#include <stdio.h>

int main(){
	
	float base, altura, area;
	
	printf("qual a base do triangulo? ");
	scanf("%f", &base);
	printf("qual a altura do triangulo? ");
	scanf("%f", &altura);
	
	area = (base * altura) /2;
	
	printf("a area do triangulo e: %.1f", area);
	
	return 0;
	
}
