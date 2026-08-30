//exercicio 18

#include <stdio.h>

int main(){
	
	float sacokg, sacog, gato1, gato2, resto;
	
	printf("Quantos kilos tem o saco de racao? ");
	scanf("%f", &sacokg);
	printf("Quantas gramas o gato 1 come por dia? ");
	scanf("%f", &gato1);
	printf("Quantas gramas o gato 2 come por dia? ");
	scanf("%f", &gato2);
	
	sacog = sacokg * 1000;
	resto = (sacog - (gato1 * 5) - (gato2 * 5)) / 1000;
	
	
	printf("A quantidade restante do saco e de: %.2f kg", resto);
	
	return 0;
	
}
