#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int imp(int n){
	
	if(n <= 1 ){
		return n;
	}else
		return imp(n)
}

int main(){
	 
	int num = 0;
	 
	printf("Digite o valor:\n");
	scanf("%d",&num);
	imp(num);
	 
	 
}
