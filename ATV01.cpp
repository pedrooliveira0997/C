#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	
	int coord[3][5];
	int x=0,y=0;
	char ponto;
	float d =0;
	
	//printf("Digite o ponto de interesse:  ");
	//scanf("%c",&ponto);
	
	//printf("Digite o valor das coordenadas de %d e %d do ponto %c: ",x,y);
	
	for(x=0;x<3;x++){
		for(y=0;y<6;y++){
			printf("Digite o valor das coordenadas de %d e %d : ",x,y);
			scanf("%d",&coord[x][y]);
		}
	}
	
	
//	for(x=0;x<4;x++){
//		printf("\n");
//		for(y=0;y<6;y++){
//			printf("%d\t",coord[y][y]);
//		}
//	}
}
