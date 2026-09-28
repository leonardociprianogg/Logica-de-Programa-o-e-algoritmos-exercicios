#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha;
	
	do{
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	
	if(senha != 1234){
		printf("\nSenha incorreta. Tente novamente.\n\n");
	}
}while(senha != 1234);

	printf("Acesso autorizado.\n");
	
	
	return 0;
}
