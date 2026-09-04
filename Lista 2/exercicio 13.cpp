//exercicio 13
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float velo_via, velo_veic, media, grave, pe;
	
	printf("Velocidade máxima da via: ");
	scanf("%f", &velo_via);
	printf("Velocidade do veículo: ");
	scanf("%f", &velo_veic);
	
	pe = (velo_veic / velo_via - 1) * 100;
	media = velo_via * 1.2;
	grave = velo_via * 1.5;
	
	if(velo_veic <= velo_via){
		printf("Não houve infração.");
	}else if(velo_veic > velo_via && velo_veic <= media){
		printf("Velocidade da via: %.f \nVelocidade registrada: %.f \nPercentual excedido: %.1f%% \nInfração media\n", velo_via, velo_veic, pe);
	}else if(velo_veic > media && velo_veic <= grave){
		printf("Velocidade da via: %.f \nVelocidade registrada: %.f \nPercentual excedido: %.1f%% \nInfração grave\n", velo_via, velo_veic, pe);
	}else{
		printf("Velocidade da via: %.f \nVelocidade registrada: %.f \nPercentual excedido: %.1f%% \nInfração gravíssima", velo_via, velo_veic, pe);
	}
	
	if(velo_veic > 120){
		printf("\nVelocidade extremamente elevada");
		
		return 0;
	}
}
