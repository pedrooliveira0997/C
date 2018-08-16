#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int n){
	
	if(n<=1)
		return 1;
		return n + soma(n-1);
	
}

int main(){
	int i=3;
	printf("%d",soma(i));
}
