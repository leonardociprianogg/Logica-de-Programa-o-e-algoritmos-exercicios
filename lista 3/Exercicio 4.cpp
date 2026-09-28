#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;	
	
	printf("Primeira nota: ");
	scanf("%f", &n1);
	printf("Segunda nota: ");
	scanf("%f", &n2);
	printf("Terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("Sua média final é: %.2f", media);
	
	
	return 0;
}
