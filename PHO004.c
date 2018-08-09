#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int busca(int k){
	
	
	int n[6]={15,3,5,10,4,2};
	int i=0;
	
	for(i=0;i<6;i++){
		if(n[i]==k){
			return i;
		}
	}
	return -1;
	//printf("O valor encontrado na posicao %d",pos);
}

int main(){
	int v,i;
	printf("Digite o valor a ser pesquisado\n");
	scanf("%d",&v);
	i=busca(v);
	
	printf("\nValor encontrado esta na posicao %d\n",i);
	
}
