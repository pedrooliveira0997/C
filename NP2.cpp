#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	
	int coordab[1][2];
	int coordcd[1][2];
	int x=0,y=0;
	float distab=0;
	float distcd=0;
	
	int i=0,j=0,k=0,l=0;
	
	printf("\nDigite o valor das coordenadas X e Y do ponto A e B respectivamente:\n");
	
	for(x=0;x<2;x++){
		for(y=0;y<2;y++){
			scanf("%d",&coordab[x][y]);
		}
	}

	printf("\nDigite o valor das coordenadas X e Y do ponto C e D respectivamente:\n");
	
	for(x=0;x<2;x++){
		for(y=0;y<2;y++){
			scanf("%d",&coordcd[x][y]);
		}
	}
	
	distab = sqrt(pow(((coordab[0][0])-(coordab[1][0])),2) + pow((coordab[0][1])-(coordab[1][1]),2));
	
	printf("\nA distacia entre A e B eh: %.2f",distab);
	
	distcd = sqrt(pow(((coordcd[0][0])-(coordcd[1][0])),2) + pow((coordcd[0][1])-(coordcd[1][1]),2));
	
	printf("\nA distacia entre C e D eh: %.2f",distcd);
	
	
	if (distab > distcd){
		printf("\n\nDistancia entre CD eh menor");
	}
	
	if (distab < distcd){
		printf("\n\nDistancia entre AB eh menor");
	}
	
	if (distab == distcd){
		printf("\n\nDistancia entre AB e CD sao iguais");
	}	
}
