#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	
	if(media >= 7){
		printf("Aprovado");
	}else if(media >= 5 && media < 7){
		printf("Recuperação");
	}else{
		printf("Reprovado");
	}
	
	return 0;
}
