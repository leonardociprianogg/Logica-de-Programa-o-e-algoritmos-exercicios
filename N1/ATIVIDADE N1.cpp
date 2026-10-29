#include <stdio.h>
#include <string.h>
#include <locale.h>


// 1 - CADASTRAR
void cadastrar(int codigo[], char nome[][15], int *total) {

    // Verificar se o cadastro esta cheio
	if (*total == 5) {
    printf("\nMemória cheia!\n");
    
    // Ler o codigo e o nome
    
	} else {
    printf("Código: ");
    scanf("%d", &codigo[*total]);

    printf("Nome: ");
    scanf("%s", nome[*total]);

 // Atualizar o total de registros
 
    (*total)++;
	}
 }

// 2 - CONSULTAR
void consultar(int codigo[], char nome[][15], int total) {

    int busca;
    int i, encontrado = 0;

    // Solicitar o codigo para consulta
	printf("\nQual codigo quer consultar? ");
	scanf("%d", &busca);
    // Percorrer o vetor procurando o codigo
	for(i = 0; i < total; i++){
		if(busca == codigo[i]){
    // Mostrar o codigo e o nome, se encontrado
			printf("Código: %d\n", codigo[i]);
			printf("Nome: %s\n", nome[i]);
			encontrado = 1;
			break;
		}
	}
    // Informar se nao foi encontrado
    if(encontrado == 0){
		printf("\nCadastro não encontrado\n");
	}
}

// 3 - LISTAR
void listar(int codigo[], char nome[][15], int total) {
	int i;
    // Percorrer os registros cadastrados
	for(i = 0; i < total; i++){
    // Mostrar o codigo e o nome de cada registro
		printf("\nCódigo: %d\n", codigo[i]);
		printf("\nNome: %s\n", nome[i]);
	}
	if(total == 0){
		printf("\nNão há cadastros\n");
	}
}

// 4 - ALTERAR
void alterar(int codigo[], char nome[][15], int total) {

    int busca;
    int i, encontrado = 0;

    // Solicitar o codigo que sera alterado
	printf("\nQual código quer alterar? ");
	scanf("%d", &busca);
    // Procurar o codigo no vetor
	for(i = 0; i < total; i++){
		if(busca == codigo[i]){
			    // Ler o novo codigo e o novo nome
			printf("\nNovo código: ");
			scanf("%d", &codigo[i]);
			printf("\nNovo nome: ");
			scanf("%14s", nome[i]);
			encontrado = 1;
			break;
		}
	}
 // Informar se nao foi encontrado
		if(encontrado == 0){
			printf("\Cadastro não encontrado\n");
		}
}

// 5 - EXCLUIR
void excluir(int codigo[], char nome[][15], int *total) {

    int busca;
	int i, j, encontrado = 0;
	
    // Solicitar o codigo que sera excluido
	printf("Qual código quer excluir? ");
	scanf("%d", &busca);
	
    // Procurar o registro no vetor
	for(i = 0; i < *total; i++){
		if(busca == codigo[i]){
			
	// Deslocar os registros seguintes
    // uma posicao para a esquerda
			for(j = i; j < *total - 1; j++){
			codigo[j] = codigo[j + 1];
			strcpy(nome[j], nome[j + 1]);
			}
			
	// Diminuir o total de registros
			(*total)--;
			encontrado = 1;
			printf("\nCadastro excluído!\n");
			break;
		}		
	}
	if(encontrado == 0){
		printf("\nCadastro não encontrado\n");
	}
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");

    int codigo[5];
    char nome[5][15];

    int total = 0;
    int opcao;

    do {
        printf("\n\n===== MENU =====");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Listar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrar(codigo, nome, &total);
                break;

            case 2:
                consultar(codigo, nome, total);
                break;

            case 3:
                listar(codigo, nome, total);
                break;

            case 4:
                alterar(codigo, nome, total);
                break;

            case 5:
                excluir(codigo, nome, &total);
                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
