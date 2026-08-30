//exercicio 11

#include <stdio.h>
#include <math.h>

int main(){
	
	double numero;
	
	do{
	printf("Digite um numero: ");
	scanf("%lf", &numero);
	
	if(numero <= 0){
	printf("deve ser maior que zero\n");}
}
while(numero <= 0);

	double quad = pow(numero, 2);
	double cubo = pow(numero, 3);
	double raizq = sqrt(numero);
	double raizc = cbrt(numero);
	
	printf("a) O quadrado do seu numero e: %.2f\n", quad);
	printf("b) O cubo do seu numero e: %.2f\n", cubo);
	printf("c) A raiz quadrada do seu numero e: %.3f\n", raizq);
	printf("d) A raiz cubica do seu numero e: %.3f", raizc);
	
	return 0;
	
}
