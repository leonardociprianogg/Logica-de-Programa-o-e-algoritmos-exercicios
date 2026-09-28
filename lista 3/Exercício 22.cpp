#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	for(num = 10; num >= 0; num--){
	printf("%d ", num);
}
	printf("\nFim da contagem!");
	
	return 0;
}
