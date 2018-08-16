#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pot(int n){
	
	if(n <= 1)
		return 2;
		
		return 2*pot(n-1);
	
	
}

int main(){
	int i=4;
	printf("%d",pot(i));
	
}
