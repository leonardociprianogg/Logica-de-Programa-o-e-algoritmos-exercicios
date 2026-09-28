#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float base, alt, area;
	
	printf("Qual valor da base? ");
	scanf("%f", &base);
	printf("Qual valor da altura? ");
	scanf("%f", &alt);
	
	area = base * alt;
	
	printf("A área do triângulo é %.2f", area);
	
	
	return 0;
}
