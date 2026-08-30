//exercicio 14

#include <stdio.h>

int main (){
	
	float nasc, ano_atual, idade, idade2050;
	
	printf("Em que ano voce nasceu? ");
	scanf("%f", &nasc);
	printf("Em que ano estamos? ");
	scanf("%f", &ano_atual);
	
	idade = ano_atual - nasc;
	idade2050 = 2050 - nasc;
	
	printf("a) Sua idade atual e: %.f\n", idade);
	printf("b) Sua idade em 2050 sera: %.f", idade2050);
	
	return 0;
	
}
