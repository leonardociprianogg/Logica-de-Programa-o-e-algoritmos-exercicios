#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float cel, fah;
	
	printf("Qual o valor da temperatura em Celsius? ");
	scanf("%f", &cel);
	
	fah = (cel * 9/5) + 32;
	
	printf("A temperatura em Fahrenheit é %.1f", fah);
	
	return 0;
}
