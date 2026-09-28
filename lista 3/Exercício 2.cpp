#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	n3 = n1 + n2;
	
	printf("O primeiro número: %d\n O segundo número: %d\n a soma deles: %d", n1, n2, n3);
	
	return 0;
}
