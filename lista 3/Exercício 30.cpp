#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	float saldo = 1000, depos, sacar;
	
	do{
		printf("Digite o numero da sua opção: \n1- Consultar saldo \n2- Depositar \n3- Sacar \n4- Sair \n");
		scanf("%d", &opcao);
		if(opcao == 1){
			printf("\nSeu saldo é: %.2f\n\n", saldo);
		}else if(opcao == 2){
			printf("\nQuanto quer depositar? \n\n");
			scanf("%f", &depos);
			saldo = saldo + depos;
			printf("\nSeu novo saldo é: %.2f\n\n", saldo);
		}else if(opcao == 3){
			printf("\nSeu saldo atual é: %.2f \nQuanto deseja sacar? \n\n", saldo);
			scanf("%f", &sacar);
			if(saldo >= sacar){
				saldo = saldo - sacar;
				printf("\nSeu saldo atual é: %.2f\n\n", saldo);
				}else{
					printf("\nSaldo insuficiente.\n\n");
				}
			}
			
		}while(opcao != 4);
		printf("\nAté logo!\n");
	
	return 0;
	}
