#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	for(num = 2; num <= 100; num+= 2){
	printf("%d ", num);
}
	
	return 0;
}
