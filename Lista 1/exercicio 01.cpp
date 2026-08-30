//exercicio 1

#include <stdio.h>

int main (){
	
	float n1, n2, n3, n4;
	float numerico;
	
	printf("digite numero ");
	scanf("%f", &n1);
	printf("digite numero ");
	scanf("%f", &n2);
	printf("digite numero ");
	scanf("%f", &n3);
	printf("digite numero ");
	scanf("%f", &n4);
	
	numerico = n1 + n2 + n3 + n4;
	
	printf("soma: %1.f", numerico);
	
	return 0;
	
}
