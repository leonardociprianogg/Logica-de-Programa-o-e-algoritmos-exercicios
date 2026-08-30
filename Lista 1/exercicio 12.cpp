//exercicio 12

#include <stdio.h>
#include <math.h>

int main(){
	//numeros
	
double n1, n2;
	
	//condicoes
	
	do{
		printf("escolha um numero base ");
		scanf("%lf", &n1);
		
		if(n1 <= 0){
			printf("erro, deve ser maior que zero\n");
			}
		
	} 
	while (n1 <= 0);
	
	do{
		printf("escolha o numero do expoente ");
		scanf("%lf", &n2);
		
		if(n2 <= 0){
			printf("erro, deve ser maior que zero\n");
		}
	}
	while (n2 <= 0);
	
	//operacao
	
	double n3 = pow(n1, n2);
	
	printf("o resultado e: %.f", n3);
	
	return 0;
	
}
