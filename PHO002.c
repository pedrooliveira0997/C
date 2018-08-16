#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int n[10]={15,3,5,130,45,21,100,65,22,10};
	int i = 0,j=0,maior=0,menor=0;
	
	for (i=0;i<10;i++){
		if(n[i]>n[i+1]){
			maior=n[i];
		}
	}
	
	for (j=0;j<10;j++){
		if(n[j+1]>n[j]){
			menor=n[j];
	 	}
	}
	
	printf("\n O maior eh %d\n",maior);
	printf("\n O menor eh %d\n",menor);
	
}

