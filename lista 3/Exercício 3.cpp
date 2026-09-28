#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma, sub, mult, div;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("Soma: %d \nSubtração: %d \nMultiplicação: %d \nDivisão: %d", soma, sub, mult, div);


return 0;	
}
