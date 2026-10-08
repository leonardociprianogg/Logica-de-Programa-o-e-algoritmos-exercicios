#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// código do sistema
	//dados
	int id[20];
	char nome[20][50], instru[20][50], prof[20][50];
	
	int total = 0;
	
	int opcao, i = 0;
	
	//consulta 
	int consulta, id_encontrado;
	
	//excluir
	int posicao;
	

	do{		
		printf("\nSISTEMA DE CADASTRO ESCOLA DE MÚSICA\n\n------------------------\n\n1 - Cadastrar\n2 - Consultar\n3 - Listar\n4 - Alterar\n5 - Excluir\n0 - Sair\nEscolha uma opção: ");
		scanf("%d", &opcao);
		
		
		switch(opcao){
	//cadastro | quantidade de vetores = 20 (0 - 19)
			case 1:
				if(total < 20){
				
				printf("\nQual o id do aluno? ");
				scanf("%d", &id[total]);
				
				printf("\nQual o nome do aluno? ");
				scanf("%s", nome[total]);
				
				printf("\nQual instrumento da aula? ");
				scanf("%s", instru[total]);
				
				printf("\nQual professor? ");
				scanf("%s", prof[total]);
				
				total++;
				
				printf("\nCadastro realizado com sucesso\n\n");
				
			}else{
				printf("\nLimite máximo de cadastros atingido\n\n");
			}
			break;
	//constultar; id_encontrado = 1 se achar um cadastro com id = consulta
			case 2:
				printf("\nQual o id do aluno? ");
					scanf("%d", &consulta);
					id_encontrado = 0;
					
				for(i = 0; i < total; i++){
					if(id[i] == consulta){
										
						printf("\nID: %d", id[i]);
						printf("\nNome: %s", nome[i]);
						printf("\nInstrumento: %s", instru[i]);
						printf("\nProfessor: %s\n", prof[i]);
						id_encontrado = 1;
						break;
					}
				}
	// se nao achar id = consulta
				if(id_encontrado == 0){
					printf("\nRegistro não encontrado\n");
				}
			break;
	//listar
			case 3:
				if(total == 0){
				printf("\nNão há registros cadastrados\n");
				}else{
					for(i = 0; i < total; i++){
				printf("\nID: %d", id[i]);
				printf("\nNome: %s", nome[i]);
				printf("\nInstrumento: %s", instru[i]);
				printf("\nProfessor: %s\n", prof[i]);
				}
			}	
			break;
	//alterar, é como um consultar, mas vai gravar novos dados por cima
			case 4:
				id_encontrado = 0;
				printf("Digite o ID do cadastro que deseja alterar: ");
				scanf("%d", &consulta);
				
				for(i = 0; i < total; i++){
					if(id[i] == consulta){
						
						printf("\nDigite o nome: ");
						scanf("%s", nome[i]);
						
						printf("\nDigite o instrumento: ");
						scanf("%s", instru[i]);
						
						printf("\nDigite o nome do professor: ");
						scanf("%s", prof[i]);
						
						id_encontrado = 1;
						
						printf("\nCadastro alterado com sucesso! \n");
						
						break;
					}	
				
				}
					if(id_encontrado == 0){
					printf("\nRegistro não encontrado\n");
			}break;
	//excluir
			case 5:
				id_encontrado = 0;
				printf("\nDigite o ID do cadastro que quer excluir: ");
				scanf("%d", &consulta);
	//busca do cadastro
				for(i = 0; i < total; i++){
					if(id[i] == consulta){
						
					posicao = i;
					id_encontrado = 1;
					break;
					}
				}
	//se achou um cadastro, coloca a posição acima no lugar, sucessivamente.
				if(id_encontrado == 1){
					for(i = posicao; i < total - 1; i++){
						id[i] = id[i + 1];
						strcpy(nome[i], nome[i +1]);
						strcpy(instru[i], instru[i + 1]);
						strcpy(prof[i], prof[i + 1]);
					}
					total--;
					printf("\nCadastro excluído");
				}else{
					printf("\nNão foi possível excluir.\n");
				}
			break;
	//qualquer escolha no menu que seja fora das opções
			default:
				printf("\nOpção inválida.");
		}
					
	}while(opcao != 0);
	
	printf("\nSistema encerrado");
	
	
	
	
	return 0;
}
