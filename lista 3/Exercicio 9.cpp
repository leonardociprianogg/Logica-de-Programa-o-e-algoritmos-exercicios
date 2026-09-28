#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float km, lt, kmlt;
	
	printf("Distância percorrida em km: ");
	scanf("%f", &km);
	printf("Quantos litros foram utilizados? ");
	scanf("%f", &lt);
	
	kmlt = km / lt;
	
	printf("O consumo médio é de %.2f km/L", kmlt);

	
	return 0;
}
