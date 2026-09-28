#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, tabuada, res;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(tabuada = 1; tabuada <= 10; tabuada++){
	res = num * tabuada;
	printf("%d x %d = %d \n", num, tabuada, res);
}
	
	return 0;
}
