//exercicio 3

#include <stdio.h>

int main (){
	
	float n1,n2,n3;
	float peso1, peso2, peso3;
	float mediap;
	
	printf("digite a primeira nota: ");
	scanf("%f", &n1);
	printf("digite o peso da primeira nota: ");
	scanf("%f", &peso1);
	printf("digite a segunda nota: ");
	scanf("%f", &n2);
	printf("digite o peso da segunda nota: ");
	scanf("%f", &peso2);
	printf("digite a terceira nota: ");
	scanf("%f", &n3);
	printf("digite o peso da terceira nota: ");
	scanf("%f", &peso3);
	
	mediap = ((n1*peso1)+(n2*peso2)+(n3*peso3))/(peso1+peso2+peso3);
	
	printf("sua media e: %.2f", mediap);
	
	return 0;
}
