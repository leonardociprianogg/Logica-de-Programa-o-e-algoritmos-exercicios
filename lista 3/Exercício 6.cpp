#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
	
	printf("Qual valor do raio? ");
	scanf("%f", &raio);
		
	area = 3.14159 * (raio * raio);
	
	printf("A área do círculo é %.2f", area);
	
	
	return 0;
}
