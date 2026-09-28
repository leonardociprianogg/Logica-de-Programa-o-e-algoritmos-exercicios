#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	for(num = 1; num <= 10; num++){
	printf("%d ", num);
}
	
	return 0;
}
