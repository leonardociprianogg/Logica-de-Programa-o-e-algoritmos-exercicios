//exercicio 14
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("Informe o código do prato (1 a 5): ");
	scanf("%d", &codigo);
	
	switch(codigo){
		case 1:
			printf("Hamburguer com fritas - R$ 28,00 \n");
			break;
		case 2:
			printf("Filé de frango grelhado - R$ 32,00 \n");
			break;
		case 3:
			printf("Lasanha à bolonhesa - R$ 35,00 \n");
			break;
		case 4:
			printf("Filé de peixe com arroz - R$ 42,00 \n");
			break;
		case 5:
			printf("Salada especial - R$ 25,00 \n");
			break;
		default:
			printf("Opção inválida \n");
			break;
	}
	
	return 0;
		
}
