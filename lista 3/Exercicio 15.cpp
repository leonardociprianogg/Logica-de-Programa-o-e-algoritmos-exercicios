#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	printf("Digite outro número: ");
	scanf("%d", &n3);
	
	
	if(n1 > n2 && n1 > n3){
		printf("%d é o maior número", n1);
	}else if(n2 > n1 && n2 > n3){
		printf("%d é o maior número", n2);
	}else{
		printf("%d é o maior número", n3);
	}
	
	
	return 0;
}
