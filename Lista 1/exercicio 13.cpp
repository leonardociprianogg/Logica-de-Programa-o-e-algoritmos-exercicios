//exercicio 13

#include <stdio.h>

int main(){
	
	float pes, pole, jarda, milha;
	
	printf("Insira a medida em pes: ");
	scanf("%f", &pes);
	
	pole = 12 * pes;
	jarda = 0.3333 * pes;
	milha = 0.000189 * pes;
	
	printf("a) O valor em polegadas e: %.f\n", pole);
	printf("b) O valor em jardas e: %.2f\n", jarda);
	printf("c) O valor em milhas e: %.3f\n", milha);
	
	return 0;
	
}
