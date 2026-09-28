#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("%d é maior que %d", n1, n2);
	}else if(n1 < n2){
		printf("%d é maior que %d", n2, n1);
	}else{
		printf("São iguais");
	}
	
	
	return 0;
}
