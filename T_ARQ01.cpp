#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int expo(int x, int n){
	
	if(n <= 1 ){
		return x;
	}
		return x * expo(x,n-1);
}

int main(){
	 
	 int base =0, exp = 0;
	 
	printf("Digite o valor da base:\n");
	scanf("%d",&base);
	printf("Digite o valor do espoente:\n");
	scanf("%d",&exp);
	printf("O resultado eh...: %d\n",expo(base,exp));
	 
	 
}
