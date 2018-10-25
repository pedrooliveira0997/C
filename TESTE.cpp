#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	
	int coord[1][2];
	int x=0,y=0;
	float dist=0;
	int i=0,j=0,k=0,l=0;
	char ponto;
	float d =0;
	
	//printf("Digite o ponto de interesse:  ");
	//scanf("%c",&ponto);
	
	//printf("Digite o valor das coordenadas de %d e %d do ponto %c: ",x,y);
	
	for(x=0;x<2;x++){
		for(y=0;y<2;y++){
			printf("Digite o valor das coordenadas X e Y do ponto A e B respectivamente:");
			scanf("%d",&coord[x][y]);
		}
	}
	
	
	//printf("%d",coord[0][0]);
	
	dist = sqrt(pow(((coord[0][0])-(coord[1][0])),2) + pow((coord[0][1])-(coord[1][1]),2));
	
	printf("%.2f",dist);
	
	
	
	
	
	
//	for(i=0;i<=1;i++){
//		printf("\n");
//		for(j=0;j<2;j++){
//			printf("%d\t",coord[i][j]);
///	}
	
//		for(xb=0;xb<1;xb++){
//		printf("\n");
//			for(yb=0;yb<2;yb++){
//				printf("%d\t",coorda[xb][yb]);
//		}
//	}

	
	
	
	
	
	
	
	
	
	
}
