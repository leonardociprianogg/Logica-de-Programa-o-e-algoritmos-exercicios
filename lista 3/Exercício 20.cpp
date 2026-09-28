#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, res;
	int ope;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Que operação deseja realizar? Digite: \n1 - Soma \n2 - Subtração \n3 - multiplicação \n4 - divisão \n");
	scanf("%d", &ope);
	
	if(ope == 1){
		res = n1 + n2;
		printf("%.2f", res);
	}else if(ope == 2){
		res = n1 - n2;
		printf("%.2f", res);
	}else if(ope == 3){
		res = n1 * n2;
		printf("%.2f", res);
	}else if(ope == 4){
		res = n1 / n2;
		printf("%.2f", res);
}
	return 0;
}
